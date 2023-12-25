#include <iostream>
#include <iomanip>

int main(void)
{
	int num;
	std::cin >> num;
	std::cout.setf(std::ios::showbase);
	std::cout << std::setw(15) << num << std::hex << std::setw(15) << num << std::oct << std::setw(15) << num << std::endl;

	return 0;
}