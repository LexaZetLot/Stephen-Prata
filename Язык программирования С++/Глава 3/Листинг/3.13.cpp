// assign.cpp -- ��������� ���� ��� �������������
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios::fixed, ios::floatfield);
	float tree = 3;			// int ������������ � float
	int guess = 3.9832;		// float ������������ � int
	int debt = 7.2E12;		// ��������� �� ��������� � C++ 
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}