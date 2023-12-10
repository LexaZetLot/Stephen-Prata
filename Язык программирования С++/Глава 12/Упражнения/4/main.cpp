#include <iostream>
#include "function.h"

int main(void)
{
	Stack list1 = Stack(10);
	Stack list2 = Stack(list1);
	Item a = 0;

	std::cout << list1.isempty() << std::endl;
	std::cout << list2.isfull() << std::endl;
	list1.push(100);
	list1.push(11);
	list1.pop(a);
	std::cout << a << std::endl;
	std::cout << list1;
	list2 = list1;
	std::cout << list2;
	return 0;
}