#ifndef FUNCTION_H_   
#define FUNCTION_H_  
#include <iostream>
#include <valarray>
#include <string>

class Wine : std::string, std::pair <std::valarray<int>, std::valarray<int>>
{
private:
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