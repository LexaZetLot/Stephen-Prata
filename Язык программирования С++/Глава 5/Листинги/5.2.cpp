// num_test.cpp -- ������������� �������� �������� � �����
#include <iostream>
int main(void)
{
	using namespace std;
	cout << "Enter the starting countdown value: "; // ���� ���������� �������� �������� 
	int limit = 0;
	cin >> limit;
	int i;
	for (i = limit; i; i--)							// �����������, ����� � ����� �- 
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";		// ���� ��������, ����� �������� � 
	return 0;
}