// usetime0.cpp -- использвание первой черновой версии класса Time
// компилировать usetime0.cpp и mytime0.cpp вместе
#include <iostream>
#include <cstring>
#include "mytime0.h"
int main(void)
{
	using std::cout;
	using std::endl;

	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	cout << "planning time = ";		// время на планирование 
	planning.Show();
	cout << endl;
	cout << "coding time = ";		// время на кодирование 
	coding.Show();
	cout << endl;
	cout << "fixing time = ";		// время на исправление 
	fixing.Show();
	cout << endl;
	total = coding.Sum(fixing);
	cout << "coding.Sum (fixing) = ";
	total.Show();
	cout << endl;
	return 0;
}