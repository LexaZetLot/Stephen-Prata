// error2.cpp -- возврат кода ошибки
#include <iostream>
#include <cfloat>	// (или float.h) для DBL_MAX 
bool hmean(double a, double b, double* ans);
int main()
{
	double x, y, z;

	std::cout << "Enter two numbers: ";					// запрос на ввод двух чисел
	while (std::cin >> x >> y)
	{
		if (hmean(x, y, &z))
			std::cout << "Harmonic mean of " << x << " and " << y
			<< " is " << z << std::endl;		// вывод среднего гармонического
		else
			std::cout << "One value should not be the negative "
			<< "of the other - try again.\n";	// одно значение не может быть равно 
		// другому с обратным знаком
		std::cout << "Enter next set of numbers <q to quit>: ";
	}				// запрос следующих двух чисел
	std::cout << "Bye!\n";
	return 0;
}
bool hmean(double a, double b, double* ans)
{
	if (a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0 * a * b / (a + b);
		return true;
	}
}