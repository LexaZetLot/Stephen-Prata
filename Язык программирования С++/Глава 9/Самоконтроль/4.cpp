#include <iostream>
int main(void)
{
	using std::cout;
	using std::cin;
	double x;
	cout << "Enter value: ";
	while (!(cin >> x))
	{
		cout << "Bsd input. Please enter a number: "; // неверный ввод
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
	cout << "Value = " << x << std::endl;
	return 0;
}