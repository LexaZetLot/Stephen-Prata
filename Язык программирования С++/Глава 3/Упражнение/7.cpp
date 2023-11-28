#include <iostream>
int main(void)
{
	using namespace std;
	int petr;

	cout << "Consumption per 100 km: ";
	cin >> petr;
	cout << "Fuel consumption: " << 62.14 / ((double)petr / 3.875) << " miles per gallon";
	return 0;
}