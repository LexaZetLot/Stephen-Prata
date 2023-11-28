// block.срр -- использование блока 
#include <iostream>
int main(void)
{
	using namespace std;
	cout << "The Amazing Accounto will sum and average ";
	cout << "five numbers for you.\n";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{													// начало блока 
		cout << "Value " << i << " : ";					// ввод числа 
		cin >> number;
		sum += number;
	}													// конец блока 
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;				// вывод суммы 
	cout << "and average to " << sum / 5 << ".\n";		// вывод среднего значения 
	cout << "The Amazing Accounto bids you adieu! \n";
	return 0;
}