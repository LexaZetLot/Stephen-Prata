#include <iostream>
#include "function.h"
using std::cout;
int main(void)
{
	Stonewt list1;
	Stonewt list2 = Stonewt(7.3, Stonewt::INT);
	Stonewt list3 = Stonewt(1, 9, Stonewt::INT);
	cout << list3 + list2;
	cout << list2 - list3;
	cout << list2 * list3;
	return 0;

}