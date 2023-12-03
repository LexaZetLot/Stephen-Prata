#include <iostream>
int main(void)
{
	double x;
	std::cout << "Enter value: ";
	while (!(std::cin >> x))
	{
		std::cout << "Bsd input. Please enter a number: "; // неверный ввод
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
	}
	std::cout << "Value = " << x << std::endl;
	return 0;
}