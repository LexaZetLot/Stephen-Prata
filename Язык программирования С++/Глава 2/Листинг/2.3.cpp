// getinfo.cpp -- ввод вывод
#include <iostream>
int main(void)
{
	using namespace std;
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots; // ввод C++
	cout << "Here are two more. ";
	carrots = carrots + 2;
	//следющая строка выполняет конкатенацию вывода
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}