// file1.��� -- ������ ���������, ��������� �� ���� ������ 
#include <iostream>
#include "coordin.h" // ������� ��������, ��������� ������� 
using namespace std;
int main(void)
{
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";					// ���� �������� � � � 
	while (cin >> rplace.x >> rplace.y)						// ������ ������������� �� 
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
		// ���� ��������� ���� ����� (q ��� ����������) 
	}
	cout << "Done.\n";
	return 0;
}// file1.��� -- ������ ���������, ��������� �� ���� ������ 
#include <iostream>
#include "coordin.h" // ������� ��������, ��������� ������� 
using namespace std;
int main(void)
{
	rect rplace;
	polar pplace;
	cout << "Enter the x and � values: ";					// ���� �������� � � � 
	while (cin >> rplace.x >> rplace.y)						// ������ ������������� �� 
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
		// ���� ��������� ���� ����� (q ��� ����������) 
	}
	cout << "Done.\n";
	return 0;
}