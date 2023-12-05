#include <iostream>
#include "function.h"

int main(void)
{
	double arr[3] = { 1.2, 5.4, 5.1 };
	SALES::Sales list = SALES::Sales(arr, 2);
	list.showSales();
	list.setSales();
	list.showSales();
	return 0;
}
