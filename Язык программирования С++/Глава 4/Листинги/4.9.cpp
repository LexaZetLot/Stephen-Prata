// strtype3.cpp -- �������������� �������� ������ string 
#include <iostream>
#include <string>				// ����������� ������� � ������ string 
#include <cstring>				// ���������� ��������� ����� � ����� � 
int main(void)
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// ������������ �������� string � ���������� �������� 
	str1 = str2;				// ����������� str2 � str2 
	strcpy(charr1, charr2);		// ����������� charr2 � charr1 

	// ���������� �������� string � ���������� �������� 
	str1 += " paste";			// ���������� " paste" � ����� strl 
	strcat(charr1, " juice");	// ���������� " juice" � ����� charr1 

	// ����������� ����� ������� string � ������ � ����� � 
	int len1 = str1.size();		// ��������� ����� strl 
	int len2 = strlen(charr1);	// ��������� ����� charr1 
	cout << "The string " << str1 << " contains "
		<< len1 << " characters. \n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters. \n";
	return 0;
}