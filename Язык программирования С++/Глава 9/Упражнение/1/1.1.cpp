#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "namesp.h" 

void setgolf(struct golf& g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(struct golf& g)
{
	using std::cin;
	using std::cout;
	cout << "Fullname: ";
	cin.getline(g.fullname, Len);
	cout << "Handicap: ";
	cin >> g.handicap;
	if (strlen(g.fullname) == 0)
		return 0;
	return 1;
}
void handicap(struct golf& g, int hc)
{
	g.handicap = hc;
}void showgolf(const struct golf& g)
{
	std::cout << "Fullname: " << g.fullname << std::endl;
	std::cout << "Handicap: " << g.handicap << std::endl;
}