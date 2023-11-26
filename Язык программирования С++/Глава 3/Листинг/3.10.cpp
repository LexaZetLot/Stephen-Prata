// arith.cpp -- Примеры некоторых арифметических операций в С++
#include <iostream>
int main(void)
{
	using namespace std;
	float hats, heads;

	cout.setf(ios::fixed, ios::floatfield); // формат с фиксированной точкой
	cout << "Enter number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;
	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	return 0;
}