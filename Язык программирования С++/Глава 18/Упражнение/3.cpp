#include <iostream>
#include <iomanip>

long double sum_values();
template <typename T, typename... Args>
long double sum_values(const T& value, const Args&... args);

int main(void)
{
	std::cout << sum_values() << ' ' << sum_values(2, 34, 54, 65);
	return 0;
}

long double sum_values()
{
	return 0.0;
}
template <typename T, typename... Args>
long double sum_values(const T& value, const Args&... args)
{
	long double sum = 0;
	sum += value + sum_values(args...);
	return sum;
}