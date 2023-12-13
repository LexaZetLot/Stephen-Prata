#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "function.h"

Port::Port(const char* br, const char* st, int b)
{
	brand = new char[std::strlen(br) + 1];
	std::strcpy(brand, br);
	std::strncpy(style, st, 19);
	bottles = b;
}

Port::Port(const Port& p)
{
	brand = new char[std::strlen(p.brand) + 1];
	std::strcpy(brand, p.brand);
	std::strncpy(style, p.style, 19);
	bottles = p.bottles;
}

Port& Port::operator= (const Port& p)
{
	delete[] brand;
	brand = new char[std::strlen(p.brand) + 1];
	std::strcpy(brand, p.brand);
	std::strncpy(style, p.style, 19);
	bottles = p.bottles;
	return *this;
}

Port& Port::operator+= (int b)
{
	bottles += b;
	return *this;
}

Port& Port::operator-= (int b)
{
	bottles -= b;
	return *this;
}

void Port::Show() const
{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Kind: " << style << std::endl;
	std::cout << "Bottles: " << bottles << std::endl;
	std::cout << std::endl;
}

std::ostream& operator << (std::ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << '\n';
	return os;
}

VintagePort::VintagePort() : Port()
{
	nickname = new char[1];
	nickname[0] = '\0';
	year = 0;
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y) : Port(br, "none", b)
{
	nickname = new char[std::strlen(nn) + 1];
	std::strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator = (const VintagePort& vp)
{
	Port::operator=(vp);
	delete nickname;
	nickname = new char[std::strlen(vp.nickname)];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Year: " << year << std::endl;
	Port::Show();
}

std::ostream& operator << (std::ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp << ", " << vp.nickname << ", " << vp.year;
	return os;
}