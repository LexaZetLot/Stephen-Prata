// not.cpp -- использование логической операции "НЕ" 
#include <iostream>
#include <climits>
bool is_int(double x);
int main(void)
{
	using namespace std;
	double num;

	cout << "Yo, dude! Enter an integer value: "; // запрос на ввод целочисленного значения 
	cin >> num;
	while (!is_int(num))					// продолжать, пока num не является int 
	{
		cout << "Out of range -- please try again: "; // выход за пределы диапазона 
		cin >> num;
	}
	int val = int(num);						// приведение типа
	cout << "You've entered the integer " << val << "\nBye\n";
	return 0;
}
bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)   // проверка предельных значений climits 
		return true;
	else
		return false;
}