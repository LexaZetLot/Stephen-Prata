// dowhile.��� -- ���� � ��������� �� ������ 
#include <iostream>
int main(void)
{
	using namespace std;
	int n;
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n"; // ������ �� ���� �������� ����� �� ��������� 1-10 
	do
	{
		cin >> n;							// ��������� ���� 
	} while (n != 7);						// ����� ��������� 
	cout << "Yes, 7 is my favorite. \n";	// ������� ����� - 7 
	return 0;
}