#include "function.h"

int main(void)
{
	adcDMA* arr[3];

	arr[0] = new baseDMA("dsad", 12);
	arr[1] = new jacksDMA("dsadsa", "sadasd", 12);
	arr[2] = new hasDMA("dsadgffg", "hjggfd", 12);


	for (int i = 0; i < 3; i++)
	{
		arr[i]->View();
	}

	return 0;
}