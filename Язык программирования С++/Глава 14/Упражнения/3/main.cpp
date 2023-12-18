#include "function.h"

const int SIZE = 5;
int main(void)
{
	QueueTp<Worker*> q;
	Worker* pw = NULL;

	int buf = 0;
	for (buf = 0; buf < SIZE; buf++)
	{
		std::cout << "Enter the employee category:\n";
		std::cout << "w: waiter  s: singer  ";
		std::cout << "t: singing waiter  q: quit\n";

		char choice = 0;
		std::cin >> choice;

		while (std::strchr("wstq", choice) == NULL)
		{
			std::cout << "Please enter a w, s, t, or q: ";
			std::cin >> choice;
		}

		if (choice == 'q')
		{
			break;
		}

		switch (choice)
		{
		case 'w':   pw = new Waiter;
			break;
		case 's':   pw = new Singer;
			break;
		case 't':   pw = new SingingWaiter;
			break;
		}
		std::cin.get();
		pw->Set();
		q.enqueue(pw);
	}
	std::cout << "\nHere is your staff:\n";

	for (int i = 0; i < buf; i++)
	{
		q.dequeue(pw);
		pw->Show();
		delete pw;
	}
	std::cout << "Bye";

	return 0;
}