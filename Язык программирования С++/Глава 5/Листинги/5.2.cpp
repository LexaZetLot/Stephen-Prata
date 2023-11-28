// num_test.cpp -- использование числовой проверки в цикле
#include <iostream>
int main(void)
{
	using namespace std;
	cout << "Enter the starting countdown value: "; // ввод начального значения счетчика 
	int limit = 0;
	cin >> limit;
	int i;
	for (i = limit; i; i--)							// завершается, когда і равно О- 
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";		// цикл завершен, вывод значения і 
	return 0;
}