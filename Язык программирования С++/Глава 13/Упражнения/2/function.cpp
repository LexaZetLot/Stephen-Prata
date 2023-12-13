#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "function.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	performers = new char[std::strlen(s1) + 1];
	std::strcpy(performers, s1);
	label = new char[std::strlen(s2) + 1];
	std::strcpy(label, s2);
	selsections = n;
	playtime = x;
}
Cd::Cd(const Cd& d)
{
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selsections = d.selsections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers = new char[1];
	performers[0] = '\0';
	label = new char[1];
	label[0] = '\0';
	selsections = 0;
	playtime = 0;
}
Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}
void Cd::Report() const
{

	std::cout << "Performers: " << performers << std::endl
		<< "label: " << label << std::endl
		<< "Selections: " << selsections << std::endl
		<< "Play time: " << playtime << std::endl << std::endl;
}
Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
		return *this;
	delete[] performers;
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	delete[] label;
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selsections = d.selsections;
	playtime = d.playtime;
	return *this;
}
Classic::Classic()
{
	namecom = new char[1];
	namecom[0] = '\0';
}
Classic::Classic(const char* nm, const char* s1, const char* s2, int n, double x) :Cd(s1, s2, n, x)
{
	namecom = new char[std::strlen(nm) + 1];
	std::strcpy(namecom, nm);
}
Classic::Classic(const Classic& d) : Cd(d)
{
	namecom = new char[std::strlen(d.namecom) + 1];
	std::strcpy(namecom, d.namecom);
}
void Classic::Report() const
{
	Cd::Report();
	std::cout << "Primary Work: " << namecom << std::endl;
}
Classic& Classic::operator=(const Classic& d)
{
	if (this == &d)
		return *this;
	Cd::operator=(d);
	delete[] namecom;
	namecom = new char[std::strlen(d.namecom) + 1];
	std::strcpy(namecom, d.namecom);
	return *this;
}
Classic::~Classic()
{
	delete[] namecom;
}
Classic::Classic(const char* nm, Cd& d) : Cd(d)
{
	namecom = new char[std::strlen(nm) + 1];
	std::strcpy(namecom, nm);
}