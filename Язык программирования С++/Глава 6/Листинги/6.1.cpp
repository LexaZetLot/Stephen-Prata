// if.��� -- ������������� ��������� if 
#include <iostream>
int main(void)
{
	using std::cin;		//���������� using
	using std::cout;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')  // ���������� �� ��������� ����������� 
	{
		if (ch == ' ') // �������� ch �� ��������� ������� 
			++spaces;
		++total;	   // ����������� �� ������ ���� ����� 
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total; // ����� ���������� �������� 
	// � �������� � ����������� 
	cout << " characters total in sentence\n";
	return 0;
}