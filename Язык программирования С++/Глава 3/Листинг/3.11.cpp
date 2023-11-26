// divide.cpp -- Деление целых чисел и чисел с плаваюзей точкой
#include <iostream>
int main(void)
{
	using namespace std;
	cout.setf(ios::fixed, ios::floatfield);
	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division: 9.0/5.0 = ";
	cout << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constant: 1e7/5 = ";
	cout << 1e7 / 9.0 << endl;
	cout << "float constant: 1e7f/9.0f = ";
	cout << 1e7f / 9.0f << endl;
	return 0;
}