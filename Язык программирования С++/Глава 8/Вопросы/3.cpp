#include <iostream>
#include <string>

void iquote(int x);
void iquote(double x);
void iquote(std::string str);

int main(void)
{
	iquote("sda");
	return 0;
}

void iquote(int x)
{
	std::cout << x << std::endl;
}

void iquote(double x)
{
	std::cout << x << std::endl;
}

void iquote(std::string str)
{
	std::cout << str << std::endl;
}