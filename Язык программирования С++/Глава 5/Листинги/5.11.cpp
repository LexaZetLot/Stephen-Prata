// compstr1.��� -- ��������� ����� � �������������� �������� 
#include <iostream>
#include <cstring>		// �������� ��� strcmp() 
int main(void)
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl; // ����� word �� ���������� ����� 
	return 0;
}