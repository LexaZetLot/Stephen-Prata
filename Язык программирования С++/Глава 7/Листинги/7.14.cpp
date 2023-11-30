//topfіѵе.срр -- обработка массива объектов string 
#include <iostream>
#include <string> 
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main(void)
{
	string list[SIZE];					// массив из 5 объектов string 
	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
	// Ввод астрономических объектов 
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << " : ";
		getline(cin, list[i]);
	}
	cout << "Your list:\n";				// вывод списка астрономических объектов 
	display(list, SIZE);
	return 0;
}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << " : " << sa[i] << endl;
}