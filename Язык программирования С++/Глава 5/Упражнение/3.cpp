#include <iostream>
int main(void)
{
	int num, ful_num = 0;

	while (num != 0)
	{
		std::cin >> num;
		ful_num += num;
		std::cout << ful_num << std::endl;
	}

	return 0;
}