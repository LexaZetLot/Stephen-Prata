// error1.cpp -- ������������� ������� abort()
#include <iostream>
#include <cstdlib> 
double hmean(double a, double b);
int main(void)
{
	double x, y, z;

	std::cout << "Enter two numbers: ";						// ������ �� ���� ���� ����� 
	while (std::cin >> x >> y)
	{
		z = hmean(x, y);
		std::cout << "Harmonic mean of " << x << " and " << y
			<< " is " << z << std::endl;				// ����� �������� �������������� 
		std::cout << "Enter next set of numbers <q to quit>: ";
		// ������ ��������� ���� ����� 
	}
	std::cout << "Bye!\n";
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
	{
		std::cout << "untenable arguments to hmean()\n";	// �������� ��������� ��� hmean() 
		std::abort();
	}
	return 2.0 * a * b / (a + b);
}