// twoarg.��� -- ������� � ����� ����������� 
#include <iostream>
void n_chars(char, int);
int main(void)
{
	using namespace std;
	int times;
	char ch;
	cout << "Enter a character: ";			// ���� ������� 
	cin >> ch;

	while (ch != 'q')						// q ��� ���������� 
	{
		cout << "Enter an integer: ";		// ���� ������ ����� 
		cin >> times;
		n_chars(ch, times);					// ������� � ����� ����������� 
		cout << "\nEnter another character or press the"
			"q - key to quit : ";			// ���� ������� ������� ��� q ��� ���������� 	
		cin >> ch;
	}
	cout << "The value of times is " << times << ".\n"; // ����� �������� ���������� times 
	cout << "Bye\n";
	return 0;
}
void n_chars(char c, int n)					// ����� �������� � n ��� 
{
	using namespace std;
	while (n-- > 0)							// �����������, ���� n �� ��������� 0 
		cout << c;
}