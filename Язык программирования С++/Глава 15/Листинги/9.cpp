// еrrоrЗ.срр -- использование исключения 
#include <iostream>
double hmean(double a, double b);
int main(void)
{
	double x, y, z;

	std::cout << "Enter two numbers: ";						// запрос на ввод двух чисел 
	while (std::cin >> x >> y)
	{
		try {												// начало блока try 
			z = hmean(x, y);
		}													// конец блока try 
		catch (const char* s)								// начало обработчика исключений 
		{
			std::cout << s << std::endl;
			std::cout << "Enter a new pair of numbers: ";	//запрос на ввод новой пары чисел 
			continue;
		}													// конец обработчика исключений 
		std::cout << "Harmonic mean of " << x << " and " << y
			<< " is " << z << std::endl;					// вывод среднего гармонического 
		std::cout << "Enter next set of numbers <q to quit>: ";		// запрос следующих двух чисел
	}
	std::cout << "Bye!\n";
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
		throw "bad hmean() arguments: a = -b not allowed";
	return 2.0 * a * b / (a + b);
}