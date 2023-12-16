// pe14-1.cpp - ����� Wine � �������������� ���������
#include "function.h"
int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Enter name of wine: ";			// ���� �������� ���� 
	char lab[50];
	cin.getline(lab, 50);
	cout << endl;
	cout << "Enter number of years: ";		// ���� ���������� ����� ����� ��������� 
	int yrs = 0;
	cin >> yrs;

	Wine holding(lab, yrs);			// ���������� ��������, ���, 
	// �������� �������� �� yrs ��������� 
	holding.GetBottles();			// ����������� ������ ��� � ���������� ������� 
	holding.Show();					// ����� ����������� ������� 
	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };

	// �������� ������ �������, ������������� 
	// � �������������� ������ �� �������� � � b 
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	std::cout << "Total bottles for " << more.Label()		// ������������ ����� Label() 
		<< ": " << more.sum() << std::endl; 			// ������������ ����� sum() 
	std::cout << "Bye\n";
	return 0;
}