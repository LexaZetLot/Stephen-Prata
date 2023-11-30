#include <iostream>

int main(void)
{
	using namespace std;
	int size;
	cout << "Enter the number of rows: ";
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		for (int j = 0; j < size - i; j++)
			cout << ".";
		for (int k = 0; k < i; k++)
			cout << "*";
		cout << endl;
	}

	return 0;
}