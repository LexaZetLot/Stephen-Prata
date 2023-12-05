#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include "function.h"

Person::Person(const std::string& In, const char* fn)
{
	lname = In;
	strcpy(fname, fn);
}
Person::~Person()
{
}
void Person::Show() const
{
	std::cout << fname << " " << lname << std::endl;
}
void Person::FormalShow() const
{
	std::cout << lname << " " << fname << std::endl;
}