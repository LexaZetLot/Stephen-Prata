#ifndef FUNCTION_H_   
#define FUNCTION_H_  
#include <iostream>
#include <valarray>
#include <string>

class Wine
{
private:
	std::string str;
	std::pair <std::valarray<int>, std::valarray<int>> pairarray;
	int years;
public:
	Wine(const char* l, int y, const int* yr, const int* bot);
	Wine(const char* l, int y);
	~Wine();

	void Show() const;
	void GetBottles();
	const std::string& Label() const;
	int sum() const;
};
#endif