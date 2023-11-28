// plus_one.cpp -- операция инкремента 
#include <iostream>
int main(void)
{
	using std::cout;
	int a = 20;
	int b = 20;

	cout << "а = " << a << ": b = " << b << "\n";
	cout << "a++ = " << a++ << " : ++b = " << ++b << "\n";
	cout << "a = " << a << ": b = " << b << "\n";
	return 0;
}