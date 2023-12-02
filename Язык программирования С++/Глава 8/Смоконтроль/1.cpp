#include <iostream>
#include <string>

void print(const std::string str, int x = 0);

int main(void)
{
	std::string str = "dadasda";
	print(str);
	print(str);
	print(str);
	print(str, 1);
	return 0;
}

void print(const std::string str, int x)
{
	static int count;
	if (x != 0)
		for (int i = 0; i < count; i++)
			std::cout << str << std::endl;
	else
		std::cout << str << std::endl;
	count++;
}