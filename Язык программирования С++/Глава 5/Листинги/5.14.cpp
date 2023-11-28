// waiting.срр -- использование clock() в цикле временной задержки 
#include <iostream>
#include <ctime> // описывает функцию clock() и тип clock_t 
int main(void)
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";		// ввод времени задержки в секундах 
	float sees;
	cin >> sees;
	clock_t delay = sees * CLOCKS_PER_SEC;				// преобразование в тики 
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)						// ожидание истечения времени 
		; // обратите внимание на точку с запятой 
	cout << "done \a\n";
	return 0;
}