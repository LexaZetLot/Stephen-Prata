// workmi.срр -- множественное наследование 
// компилировать вместе с workermi.срр 
#include <iostream>
#include <cstring>
#include "workermi.h" 
const int SIZE = 5;
int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	Worker* lolas[SIZE];
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n"			// ввод категории работника
			<< "w: waiter  s: singer  "						// w - официант, s - певец,
			<< "t: singing waiter  q: quit\n";				// t - поющий официант, q - завершение
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w, s, t, or q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch (choice)
		{
		case 'w':   lolas[ct] = new Waiter;
			break;
		case 's':   lolas[ct] = new Singer;
			break;
		case 't':   lolas[ct] = new SingingWaiter;
			break;
		}
		cin.get();
		lolas[ct]->Set();
	}

	cout << "\nHere is your staff:\n";						// вывод списка работников
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	for (i = 0; i < ct; i++)
		delete lolas[i];
	cout << "Bye.\n";
	return 0;
}