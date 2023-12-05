#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "function.h" 

void golf::setgolf(const char* name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

int golf::setgolf()
{
	using std::cin;
	using std::cout;
	cout << "Fullname: ";
	cin.getline(fullname, Len);
	cout << "Handicap: ";
	cin >> handicap;
	if (strlen(fullname) == 0)
		return 0;
	return 1;
}
void golf::set_handicap(int hc)
{
	handicap = hc;
}
void golf::showgolf() const
{
	std::cout << "Fullname: " << fullname << std::endl;
	std::cout << "Handicap: " << handicap << std::endl;
}