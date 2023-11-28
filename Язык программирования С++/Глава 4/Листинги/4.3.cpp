//insrtl.срр -- чтение более одной строки 
#include <iostream>
int main(void)
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";					// запрос имени 
	cin >> name;
	cout << "Enter your favorite dessert:\n";		// запрос любимого десерта 
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << " .\n";
	return 0;
}