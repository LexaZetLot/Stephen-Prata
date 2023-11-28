#include <iostream>
#include <string>
int main(void)
{
	using namespace std;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}