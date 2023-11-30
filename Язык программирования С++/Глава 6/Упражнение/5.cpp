#include <iostream>
int main(void)
{
	int tax = 0;

	while (std::cin >> tax)
		if (tax <= 5000)
			std::cout << 0 << std::endl;
		else if ((tax > 5000) && (tax <= 20000))
			std::cout << (tax * 0) + ((tax - 5000) * 0.10) << std::endl;
		else if ((tax > 20000) && (tax <= 35000))
			std::cout << (5000 * 0) + (10000 * 0.10) + ((tax - 10000) * 0.15) << std::endl;
		else if (tax > 35000)
			std::cout << (5000 * 0) + (10000 * 0.10) + (20000 * 0.15) + ((tax - 35000) * 0.20) << std::endl;

	return 0;
}