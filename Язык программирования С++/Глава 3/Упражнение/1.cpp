#include <iostream>
int main(void)
{
	using namespace std;
	const int x = 12;
	int num;

	cout << "Enter your height in Inches: ";
	cin >> num;
	cout << "Feet: " << (int)(num / x) << " Inches: " << num % x;

	return 0;
}