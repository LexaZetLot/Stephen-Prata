// bondini.cpp -- использование управляющих последовательностей
#include <iostream>
int main(void)
{
	using namespace std;
	cout << "\aOperator \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan z3\n";
	return 0;
}