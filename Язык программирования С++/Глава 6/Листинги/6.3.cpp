// ifelseif.cpp -- ������������� ��������� if else if else 
#include <iostream>
const int Fave = 27;
int main(void)
{
	using namespace std;
	int n = 0;
	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: "; // ������ �� ���� ����� �� ��������� 1-100 
	do
	{
		cin >> n;
		if (n < Fave)
			cout << "Too low -- guess again: ";		// ����� ������� ���� 
		else if (n > Fave)
			cout << "Too high -- guess again: ";	// ����� ������� ������ 
		else
			cout << Fave << " is right! \n";		// ����� ������� 
	} while (n != Fave);
	return 0;
}