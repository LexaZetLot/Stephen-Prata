// hexoct2.cpp -- отображает значения в шестнадцатеричном и восьмеричном форматах
#include <iostream>
using namespace std;
int main(void)
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;	// манипулятор для изменения основная система счисления
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;	// манипулятор для изменения основная система счисления
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}