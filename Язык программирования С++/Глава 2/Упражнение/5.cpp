#include <iostream>

int fun1(int num);

int main(void)
{
	using namespace std;

	int num;
	cout << "Please enter a Celsius value: ";
	cin >> num;
	cout << num << " degrees Celsius is " << fun1(num) << " degrees Fahrenheit.";
	return 0;
}

int fun1(int num)
{
	return ((double)num * 1.8) + 32;
}