// insrt3.cpp -- чтение более одного слова с помощью get() и get() 
#include <iostream>
int main(void)
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";					// запрос имени 
	cin.get(name, ArSize).get();					// читать строку и символ новой строки 
	cout << "Enter your favorite dessert:\n";		// запрос любимого десерта 
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}