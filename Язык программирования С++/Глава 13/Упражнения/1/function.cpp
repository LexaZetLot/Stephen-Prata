#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "function.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	std::strcpy(performers, s1);
	std::strcpy(label, s2);
	selsections = n;
	playtime = x;
}
Cd::Cd(const Cd& d)
{
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selsections = d.selsections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selsections = 0;
	playtime = 0;
}
Cd::~Cd()
{
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
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selsections = d.selsections;
	playtime = d.playtime;
	return *this;
}
Classic::Classic()
{
	namecom[0] = '\0';
}
Classic::Classic(const char* nm, const char* s1, const char* s2, int n, double x) :Cd(s1, s2, n, x)
{
	if (strlen(nm) < 20)
		std::strcpy(namecom, nm);
	else
		strncpy(namecom, nm, 19);
	namecom[19] = '\0';
}
Classic::Classic(const Classic& d) : Cd(d)
{
	if (strlen(d.namecom) < 20)
		std::strcpy(namecom, d.namecom);
	else
		strncpy(namecom, d.namecom, 19);
	namecom[19] = '\0';

}
void Classic::Report() const
{
	Cd::Report();
	std::cout << "Primary Work: " << namecom << std::endl;
}
Classic& Classic::operator=(const Classic& d)
{
	Cd::operator=(d);
	if (strlen(d.namecom) < 20)
		std::strcpy(namecom, d.namecom);
	else
		strncpy(namecom, d.namecom, 19);
	namecom[19] = '\0';
	return *this;
}
Classic::~Classic()
{
}
Classic::Classic(const char* nm, Cd& d) : Cd(d)
{
	if (strlen(nm) < 20)
		std::strcpy(namecom, nm);
	else
		strncpy(namecom, nm, 19);
	namecom[19] = '\0';
}