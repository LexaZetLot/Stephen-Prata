// usetime1.cpp -- использование второй черновой версии класса Time
// компилировать usetimel.срр и mytimel.cpp вместе 
#include <iostream>
#include "mytime1.h"

int main(void)
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";			// врем€ на планирование 
	planning.Show();
	cout << endl;
	cout << "coding time = ";			// врем€ на кодирование 
	coding.Show();
	cout << endl;
	cout << "fixing time = ";		// врем€ на исправление 
	fixing.Show();
	cout << endl;
	total = coding + fixing;

	// Ќотаци€ с операцией 
	cout << "coding + fixing = "; // кодирование + исправление 
	total.Show();
	cout << endl;
	Time morefixing(3, 28);
	cout << "more fixing time = "; // дополнительное врем€ на исправление 
	morefixing.Show();
	cout << endl;
	total = morefixing.operator+(total);

	// Ќотаци€ с функцией 
	cout << "morefixing.operator+(total) = ";
	total.Show();
	cout << endl;
	return 0;
}