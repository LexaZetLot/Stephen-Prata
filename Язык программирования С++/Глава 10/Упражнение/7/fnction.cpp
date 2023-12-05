#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "function.h" 

Plorge::Plorge(const char* str, int num)
{
	strcpy(name, str);
	ci = num;
}
void Plorge::show() const
{
	std::cout << name << ' ' << ci << std::endl;
}
void Plorge::set_ci(int num)
{
	ci = num;
}