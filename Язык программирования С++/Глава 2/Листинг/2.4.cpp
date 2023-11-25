// sqrt.cpp -- использование функции sqrt ()
#include <iostream>
#include <cmath> //или math.h
int main(void)
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in square fleet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalentof square " << side
		<< " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}