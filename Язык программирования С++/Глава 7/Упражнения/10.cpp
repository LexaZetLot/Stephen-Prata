#include <iostream>
double mul(double x, double y);
double div(double x, double y);
double sub(double x, double y);
double add(double x, double y);
double calculate(double x, double y, double(*pt)(double x, double y));
int main(void)
{
	double x = 0;
	double y = 0;
	double (*pf[4]) (double, double) = { mul, div, sub, add };
	while (std::cin >> x >> y)
		for (int i = 0; i < 4; i++)
			std::cout << calculate(x, y, pf[i]) << std::endl;
	return 0;
}

double mul(double x, double y)
{
	return x * y;
}
double div(double x, double y)
{
	return x / y;
}
double sub(double x, double y)
{
	return x - y;
}
double add(double x, double y)
{
	return x + y;
}
double calculate(double x, double y, double(*pt)(double x, double y))
{
	return (*pt) (x, y);
}