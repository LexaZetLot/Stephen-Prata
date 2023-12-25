#include <iostream>

int main(void)
{
	char ch;
	int num = 0;

	while (std::cin.get(ch) && ch != '$')
		num++;

	std::cout << std::endl << num;
	return 0;
}