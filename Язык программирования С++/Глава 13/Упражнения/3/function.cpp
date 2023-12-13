#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "function.h"

adcDMA::adcDMA()
{
	label = new char[1];
	label[0] = '\0';
	rating = 0;
}
adcDMA::adcDMA(const char* l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}
adcDMA::adcDMA(adcDMA& dma)
{
	label = new char[std::strlen(dma.label) + 1];
	std::strcpy(label, dma.label);
	rating = dma.rating;
}
adcDMA& adcDMA::operator= (const adcDMA& adc)
{
	delete[] label;
	label = new char[std::strlen(adc.label) + 1];
	std::strcpy(label, adc.label);
	rating = adc.rating;
	return *this;
}
adcDMA::~adcDMA()
{
	delete[] label;
}
void adcDMA::View() const
{
	std::cout << "Label: " << label << std::endl;
	std::cout << "Rating: " << rating << std::endl;
}
std::ostream& operator<<(std::ostream& os, const adcDMA& adc)
{
	os << "Label: " << adc.label << '\n' << "Rating: " << adc.rating << '\n';
	return os;
}



baseDMA::baseDMA() : adcDMA() {}

baseDMA::baseDMA(const char* l, int r) : adcDMA(l, r) {}

baseDMA::baseDMA(baseDMA& dma) : adcDMA(dma) {}

baseDMA& baseDMA::operator= (const baseDMA& adc)
{
	adcDMA::operator=(adc);
	return *this;
}

baseDMA::~baseDMA() {}

void baseDMA::View() const
{
	adcDMA::View();
}

std::ostream& operator<<(std::ostream& os, const baseDMA& adc)
{
	os << (const adcDMA&)adc << '\n';
	return os;
}



jacksDMA::jacksDMA() : adcDMA()
{
	color[0] = '\0';
}

jacksDMA::jacksDMA(const char* c, const char* l, int r) : adcDMA(l, r)
{
	std::strncpy(color, c, COL_LEN - 1);
}

jacksDMA::jacksDMA(jacksDMA& dma) : adcDMA(dma)
{
	std::strncpy(color, dma.color, COL_LEN - 1);
}

jacksDMA& jacksDMA::operator= (const jacksDMA& adc)
{
	adcDMA::operator=(adc);
	std::strncpy(color, adc.color, COL_LEN - 1);
	return *this;
}

jacksDMA::~jacksDMA() {}

void jacksDMA::View() const
{
	adcDMA::View();
	std::cout << "Color: " << color << std::endl;
}

std::ostream& operator<<(std::ostream& os, const jacksDMA& adc)
{
	os << "Color: " << adc.color << (const adcDMA&)adc << '\n';
	return os;
}



hasDMA::hasDMA() : adcDMA()
{
	style = new char[1];
	style[0] = '\0';
}

hasDMA::hasDMA(const char* s, const char* l, int r) : adcDMA(l, r)
{
	style = new char[strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(hasDMA& dma) : adcDMA(dma)
{
	style = new char[strlen(dma.style) + 1];
	std::strcpy(style, dma.style);
}

hasDMA& hasDMA::operator= (const hasDMA& adc)
{
	adcDMA::operator=(adc);
	delete[] style;
	style = new char[strlen(adc.style) + 1];
	std::strcpy(style, adc.style);
	return *this;
}

hasDMA::~hasDMA()
{
	delete[] style;
}

void hasDMA::View() const
{
	adcDMA::View();
	std::cout << "Style: " << style << std::endl;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& adc)
{
	os << "Style: " << adc.style << (const adcDMA&)adc << '\n';
	return os;
}