#include <iostream>
#include "namesp.h"

int main(void)
{
	double arr[3] = { 1.2, 5.4, 5.1 };
	struct SALES::Sales list;
	setSales(list, arr, 3);
	showSales(list);
	setSales(list);
	showSales(list);
	return 0;
}
