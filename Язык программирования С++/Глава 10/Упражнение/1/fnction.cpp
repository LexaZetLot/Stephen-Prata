#include <iostream>
#include "function.h"

void Banck::cret(const std::string str1, const std::string str2, int n)
{
	name = str1;
	name_num = str2;
	num = n;
}
void Banck::show() const
{
	std::cout << name << std::endl << name_num << std::endl << num << std::endl;
}
void Banck::add(int n)
{
	num += n;
}
void Banck::pwd(int n)
{
	if (num - n > 0)
		num -= n;
}