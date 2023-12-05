#include <iostream> 
#include <cctype>		
#include "function.h"

int main(void)
{
	using namespace std;
	Stack st;		// �������� ������� ����� 
	char ch;
	int fullcash = 0;
	struct customer list1;
	// A - ���������� ������, � - ��������� ������, Q - ���������� 
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
		case 'a': cout << "Enter a PO number to add: ";		// ������ ������ ������ 
			cin >> list1.fullname >> list1.payment;
			if (st.isfull())
				cout << "stack already full\n";				// ���� ��� ����� 
			else
				st.push(list1);
			break;
		case 'P':
		case 'p': if (st.isempty())
			cout << "stack already empty\n";				// ���� ��� ���� 
				else {
			st.pop(list1, fullcash);
			cout << "PO #" << list1.payment << " popped\n";			// ����� ��������� 
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