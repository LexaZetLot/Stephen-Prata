#include <iostream>
#include <iomanip>

int main(void)
{
	char str[30];
	int hou;
	int num;
	std::cout << "Enter your name: ";
	std::cin.get(str, 30).get();
	std::cout << "Enter your hourly wages: ";
	std::cin >> hou;
	std::cout << "Enter number of hours worked: ";
	std::cin >> num;
	std::cout.setf(std::ios::showpoint);
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout.setf(std::ios::right, std::ios::adjustfield);

	std::cout << "First format:" << std::endl;
	std::cout << std::setw(25) << str << ": $" << std::setprecision(2) << std::setw(10) << hou << ":" << std::setprecision(1) << std::setw(5) << num << std::endl;
	std::cout << "Second format:" << std::endl;
	std::cout.setf(std::ios::left, std::ios::adjustfield);
	std::cout << std::setw(25) << str << ": $" << std::setprecision(2) << std::setw(10) << hou << ":" << std::setprecision(1) << std::setw(5) << num << std::endl;

	return 0;
}