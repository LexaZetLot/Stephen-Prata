// chartype.cpp -- тип char
#include <iostream>
int main(void)
{
	using namespace std;
	char ch;		// объ€вление переменной char

	cout << "Enter a character: " << endl;
	cin >> ch;
	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;
	return 0;
}