#include <iostream>
#include <string>
#include <stdexcept>
class bad_hmean : public std::domain_error
{
private:
	double num1;
	double num2;
public:
	explicit bad_hmean(const std::string& what_arg, double num1, double num2) : domain_error(what_arg), num1(num1), num2(num2) {}
	void show() const;
};
inline void bad_hmean::show() const { std::cout << "num1: " << num1 << " num2: " << num2 << std::endl; }

class bad_gmean : public std::invalid_argument
{
private:
	double num1;
	double num2;
public:
	explicit bad_gmean(const std::string& what_arg, double num1, double num2) : std::invalid_argument(what_arg), num1(num1), num2(num2) {}
	void show() const;
};
inline void bad_gmean::show() const { std::cout << "num1: " << num1 << " num2: " << num2 << std::endl; }