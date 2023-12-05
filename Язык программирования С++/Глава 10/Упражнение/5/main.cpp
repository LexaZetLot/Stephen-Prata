#include <iostream> 
#include <cctype>		
#include "function.h"

int main(void)
{
	using namespace std;
	Stack st;		// создание пустого стека 
	char ch;
	int fullcash = 0;
	struct customer list1;
	// A - добавление заказа, – - обработка заказа, Q - завершение 
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a': cout << "Enter a PO number to add: ";		// запрос номера заказа 
			cin >> list1.fullname >> list1.payment;
			if (st.isfull())
				cout << "stack already full\n";				// стек уже полон 
			else
				st.push(list1);
			break;
		case 'P':
		case 'p': if (st.isempty())
			cout << "stack already empty\n";				// стек уже пуст 
				else {
			st.pop(list1, fullcash);
			cout << "PO #" << list1.payment << " popped\n";			// заказ вытолкнут 
		}
				break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
		bool flag = true;
		do
		{
			flag = st.pop(list1, fullcash);
		} while (flag);
	}
	cout << fullcash << endl;
	cout << "Bye\n";
	return 0;
}