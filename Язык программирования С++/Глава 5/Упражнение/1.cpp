#include <iostream>
int main(void)
{
	using namespace std;
	int a, b, c = 0;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		c += i;
	cout << c;
	return 0;
}