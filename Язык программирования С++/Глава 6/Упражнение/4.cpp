#include <iostream>
#include <cctype>
const int size = 128;
struct BOP
{
	char fullname[size];
	char title[size];
	char bopname[size];
	int preference;
};

int main()
{
	char ch;
	struct BOP arr[4] =
	{
		{ "1.1", "1.2", "1.3", 2 },
		{ "2.1", "2.2", "2.3", 0 },
		{ "3.1", "3.2", "3.3", 1 },
		{ "4.1", "4.2", "4.3", 2 }
	};

	std::cout << "a. display by name            b. display by title" << std::endl;
	std::cout << "c. display by bopname         d. display by preference" << std::endl;
	std::cout << "q. quit" << std::endl;

	while (std::cin >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			for (int i = 0; i < 4; i++)
				std::cout << arr[i].fullname << std::endl;
			break;
		case 'b':
		case 'B':
			for (int i = 0; i < 4; i++)
				std::cout << arr[i].title << std::endl;
			break;
		case 'c':
		case 'C':
			for (int i = 0; i < 4; i++)
				std::cout << arr[i].bopname << std::endl;
			break;
		case 'd':
		case 'D':
			for (int i = 0; i < 4; i++)
				switch (arr[i].preference)
				{
				case 0:
					std::cout << arr[i].fullname << std::endl;
					break;
				case 1:
					std::cout << arr[i].title << std::endl;
					break;
				case 2:
					std::cout << arr[i].bopname << std::endl;
					break;
				default:
					break;
				}
			break;
		case 'q':
		case 'Q':
			return 0;
		default:
			break;
		}
	}
	return 0;
}