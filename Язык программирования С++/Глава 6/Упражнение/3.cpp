#include <iostream>
#include <cctype>
int main(void)
{
	char ch = 0;
	std::cout << "Plase enter one of the following choices:" << std::endl;
	std::cout << "c) carnivore                  p) pianist" << std::endl;
	std::cout << "t) tree                       g) game" << std::endl;
	while (std::cin.get(ch))
	{
		switch (ch)
		{
		case 'c':
		case 'C':
			std::cout << 'c' << std::endl;
			continue;
		case 'p':
		case 'P':
			std::cout << 'p' << std::endl;
			continue;
		case 't':
		case 'T':
			std::cout << 't' << std::endl;
			continue;
		case 'g':
		case 'G':
			std::cout << 'g' << std::endl;
			continue;
		default:
			std::cout << "Plese enter a c, p, t, or g: ";
			continue;
		}
	}
}