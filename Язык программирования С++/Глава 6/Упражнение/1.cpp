#include <iostream>
#include <cctype>
int main(void)
{
	char ch;
	while (std::cin.get(ch) && ch != '@')
		if (islower(ch))
			std::cout << (char)toupper(ch);
		else
			std::cout << (char)tolower(ch);

	return 0;
}