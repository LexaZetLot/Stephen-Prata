#include <iostream>
#include "function.h"

int main(void)
{
	Stonewt list1[4] = { 10.65, 9.5, 15.4, 74.2 };
	Stonewt list2 = (11.0);
	int max = 0, min = 0;
	int num = 0;

	max_min_search(list1, 4, max, min);

	std::cout << list1[max] << "   " << list1[min];
	for (int i = 0; i < 4; i++)
		if (list1[i] <= list2)
			num++;
	std::cout << std::endl << num;
	return 0;
}

