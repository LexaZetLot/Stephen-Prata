#include <iostream>
int main(void)
{
	using namespace std;
	int inches;
	int feet;
	int pound;

	cout << "Please enter your height in feet and inches: ";
	cin >> feet >> inches;
	cout << "Enter your weight in pounds: ";
	cin >> pound;
	cout << "BMI: " << (((double)(feet * 12 + inches)) * 0.0254) / (((double)pound / 2.2) * ((double)pound / 2.2));
	return 0;
}