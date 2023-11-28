#include <iostream>
int main(void)
{
	using namespace std;
	long long eart;
	long long us;

	cout << "Enter the world's population: ";
	cin >> eart;
	cout << "Enter the population of the US: ";
	cin >> us;
	cout << "The population of the US is " << ((double)us * 100) / (double)eart << "% of the world population.";
	return 0;
}