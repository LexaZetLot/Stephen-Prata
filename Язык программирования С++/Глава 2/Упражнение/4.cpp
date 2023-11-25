#include <iostream>

int fun1(int num);

int main(void)
{
	using namespace std;

	int num;
	cout << "Enter your age: ";
	cin >> num;
	cout << "Your age in months: " << fun1(num);
	return 0;
}

int fun1(int num)
{
	return num * 12;
}