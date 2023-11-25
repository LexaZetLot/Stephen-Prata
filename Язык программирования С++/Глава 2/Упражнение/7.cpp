#include <iostream>
using namespace std;

void fun1(int num1, int num2);

int main(void)
{
	int num1;
	int num2;
	cout << "Enter the number of hours: ";
	cin >> num1;
	cout << "Enter the number of minutes: ";
	cin >> num2;
	fun1(num1, num2);

	return 0;
}

void fun1(int num1, int num2)
{
	cout << "Time: " << num1 << ":" << num2;
}