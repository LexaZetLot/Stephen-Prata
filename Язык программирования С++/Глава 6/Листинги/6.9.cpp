//condit.срр -- использование условной операции 
#include <iostream>
int main(void)
{
	using namespace std;
	int a, b;
	cout << "Enter two integers: ";		// запрос на ввод двух целых чисел 
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;				// с = а, если а > b, иначе с = b 
	cout << " is " << c << endl;		// вывод большего из указанных чисел 
	return 0;
}