// delete.cpp -- ������������� �������� delete
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>			// ��� string.h 
using namespace std;
char* getname(void);				// �������� ������� 
int main(void)
{
	char* name;						// �������� ���������, �� ��� ��������� 
	name = getname();				// ������������ name ������ ������ 
	cout << name << " at " << (int*)name << "\n";
	delete[] name;					// ������������ ������ 
	name = getname();				// ��������� ������������� ������������� ������ 
	cout << name << " at " << (int*)name << "\n";
	delete[] name;					// ����� ������������ ������ 
	return 0;
}
char* getname(void)						// ���������� ��������� �� ����� ������ 
{
	char temp[80];					// ��������� ��������� 
	cout << "Enter last name: ";	// ���� ������� 
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);				// ����������� ������ � ������� ������������ 
	return pn;						// �� ���������� ������� temp �������� 
}