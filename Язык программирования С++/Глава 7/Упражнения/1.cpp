#include <iostream>
double f1(double x, double y);
int main(void)
{
	int x = 1, y = 1;
	std::cin >> x >> y;
	while (x != 0 && y != 0)
	{
		std::cout << f1(x, y) << std::endl;
		std::cin >> x >> y;
	}
	return 0;
}
double f1(double x, double y)
{
	return  (2.0 * x * y) / (x + y);
}