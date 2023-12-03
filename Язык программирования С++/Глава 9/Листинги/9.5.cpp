// external.cрр -- внешние переменные 
// Компилировать вместе с support.cрр 
#include <iostream>
using namespace std;
// Внешняя переменная 
double warming = 0.3;				// переменная warming определена 
// Прототипы функций 
void update(double dt);
void local(void);
int main(void)						// использует глобальную переменную 
{
	cout << "Global warming is " << warming << " degrees. \n";
	update(0.1);					// вызов функции, изменяющей warming 
	cout << "Global warming is " << warming << " degrees. \n";
	local();						// вызов функции с локальной переменной warming 
	cout << "Global warming is " << warming << " degrees. \n";
	return 0;
}