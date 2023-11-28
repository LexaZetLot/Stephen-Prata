//insrt2.cpp -- чтение более одного слова с помощью getline()
#include <iostream>
int main(void)
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";					// запрос имени 
	cin.getline(name, ArSize); 						// читать до символа новой строки 
	cout << "Enter your favorite dessert:\n";		// запрос любимого десерта 
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << " .\n";
	return 0;
}