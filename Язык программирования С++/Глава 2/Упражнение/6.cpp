#include <iostream>

double fun1(double num);

int main(void)
{
	using namespace std;

	double num;
	cout << "Enter the number of light years: ";
	cin >> num;
	cout << num << " light years = " << fun1(num) << " astronomical units.";
	return 0;
}

double fun1(double num)
{
	return num * 63240;
}