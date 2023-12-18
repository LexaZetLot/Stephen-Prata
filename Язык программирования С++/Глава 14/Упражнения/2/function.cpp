#include "function.h"

Wine::Wine(const char* l, int y, const int* yr, const int* bot) : std::string(l), years(y)
{
	std::pair <std::valarray<int>, std::valarray<int>>::first.resize(y);
	std::pair <std::valarray<int>, std::valarray<int>>::second.resize(y);
	for (int i = 0; i < y; i++)
	{
		std::pair <std::valarray<int>, std::valarray<int>>::first[i] = yr[i];
		std::pair <std::valarray<int>, std::valarray<int>>::second[i] = bot[i];
	}
}

Wine::Wine(const char* l, int y) : std::string(l), years(y)
{
	std::pair <std::valarray<int>, std::valarray<int>>::first.resize(y);
	std::pair <std::valarray<int>, std::valarray<int>>::second.resize(y);

	for (int i = 0; i < y; i++)
	{
		std::pair <std::valarray<int>, std::valarray<int>>::first[i] = 0;
		std::pair <std::valarray<int>, std::valarray<int>>::second[i] = 0;
	}
}

Wine::~Wine()
{
}

void Wine::Show() const
{
	std::cout << "Wine: " << (const std::string&)*this << std::endl;
	std::cout << "\tYear\tBottles" << std::endl;

	for (int i = 0; i < years; i++)
		std::cout << "\t" << std::pair <std::valarray<int>, std::valarray<int>>::first[i]
		<< "\t" << std::pair <std::valarray<int>, std::valarray<int>>::second[i]
		<< std::endl;
}

void Wine::GetBottles()
{
	std::cout << "Enter " << (const std::string&)*this << " data for " << years << " year(s):" << std::endl;
	for (int i = 0; i < years; i++)
	{
		std::cout << "Enter year: ";
		std::cin >> std::pair <std::valarray<int>, std::valarray<int>>::first[i];
		std::cout << "Enter bottles for that year: ";
		std::cin >> std::pair <std::valarray<int>, std::valarray<int>>::second[i];
	}
}

const std::string& Wine::Label() const
{
	return (const std::string&)*this;
}

int Wine::sum() const
{
	int sum = 0;
	for (int i = 0; i < years; i++)
		sum += std::pair <std::valarray<int>, std::valarray<int>>::second[i];

	return sum;
}