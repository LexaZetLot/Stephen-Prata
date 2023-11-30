// strgfun.cpp -- ������� �� ��������� ���������� 
#include <iostream>
unsigned int c_in_str(const char* str, char ch);
int main(void)
{
	using namespace std;
	char mmm[15] = "minimum";							// ������ � ������� 
	// ��������� ������� ������� ���������� char ������ static, 
	// ����� ��������� ������������� ������� 

	const char* wail = "ululate";						// wail ��������� �� ������ 
	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;	// ����� ���������� �������� m 
	cout << us << " u characters in " << wail << endl;	// ����� ���������� �������� u
	return 0;
}
// ��� ������� ������������ ���������� �������� ch � ������ str 
unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str)			// ����������, ����� *str ����� '\0' 
	{
		if (*str == ch)
			count++;
		str++;				// ����������� ��������� �� ��������� ������ 
	}
	return count;
}