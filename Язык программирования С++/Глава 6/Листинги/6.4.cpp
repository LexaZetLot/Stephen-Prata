// or.��� -- ������������� ���������� �������� "���" 
#include <iostream>
int main(void)
{
	using namespace std;
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue? <y/n> ";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')				// � ��� Y 
		cout << "You were warned! \a\a\n";
	else if (ch == 'n' || ch == 'N')		// n ��� N 
		cout << "A wise choice . . . bye\n";
	else
		cout << "That wasn't � � or n! Apparently you "
		"can't follow\ninstructions, so "
		"I'll trash your disk anyway.\a\a\a\n";
	return 0;
}