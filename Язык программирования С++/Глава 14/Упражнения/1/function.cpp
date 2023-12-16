#include "function.h"

Wine::Wine(const char* l, int y, const int* yr, const int* bot)
{
	str = l;
	years = y;

	pairarray.first.resize(y);
	pairarray.second.resize(y);

	for (int i = 0; i < y; i++)
	{
		pairarray.first[i] = yr[i];
		pairarray.second[i] = bot[i];
	}
}

Wine::Wine(const char* l, int y)
{
	str = l;
	years = y;

	pairarray.first.resize(y);
	pairarray.second.resize(y);

	for (int i = 0; i < y; i++)
	{
		pairarray.first[i] = 0;
		pairarray.second[i] = 0;
	}
}

Wine::~Wine()
{
}

void Wine::Show() const
{
	std::cout << "Wine: " << str << std::endl;
	std::cout << "\tYear\tBottles" << std::endl;

	for (int i = 0; i < years; i++)
		std::cout << "\t" << pairarray.first[i]
		<< "\t" << pairarray.second[i]
		<< std::endl;
}

void Wine::GetBottles()
{
	std::cout << "Enter " << str << " data for " << years << " year(s):" << std::endl;
	for (int i = 0; i < years; i++)
	{
		std::cout << "Enter year: ";
		std::cin >> pairarray.first[i];
		std::cout << "Enter bottles for that year: ";
		std::cin >> pairarray.second[i];
	}
}

const std::string& Wine::Label() const
{
	return str;
}

int Wine::sum() const
{
	int sum = 0;
	for (int i = 0; i < years; i++)
		sum += pairarray.second[i];

	return sum;
}