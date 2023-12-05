#include <iostream>
#include "function.h"

void print(int* n);

int main(void)
{
	bool flag = true;
	List list = List::List(10);
	std::cout << list.isempty() << std::endl;
	list.add_list(11);
	list.add_list(12);
	std::cout << list.isempty() << std::endl;
	std::cout << list.isfull() << std::endl;
	for (int i = 1; i < 6 && flag != false; i++)
		flag = list.visit_element(i, print);
	return 0;
}
void print(int* n)
{
	std::cout << *n << std::endl;
}