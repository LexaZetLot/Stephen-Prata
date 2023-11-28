#include <iostream>
int main(void)
{
	using namespace std;
	int km;
	int sp;

	cout << "How many kilometers did you drive: ";
	cin >> km;
	cout << "How much gasoline did you spend: ";
	cin >> sp;
	cout << "Petrol per 100 km: " << (double)km / (double)sp;
	return 0;
}