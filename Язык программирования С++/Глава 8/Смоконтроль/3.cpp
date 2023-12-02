#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

void upstr(std::string str);

int main(void)
{
	std::string str;

	while (getline(std::cin, str) && str != "q")
		upstr(str);

	return 0;
}

void upstr(std::string str)
{
	for (int i = 0; i < str.size() + 1; i++)
		std::cout << (char)toupper(str.c_str()[i]);
	std::cout << std::endl;
}