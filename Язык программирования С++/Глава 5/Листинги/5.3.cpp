// express.��� -- �������� ���������
#include <iostream>
int main(void)
{
	using namespace std;
	int x = 0;
	cout << "The expression x = 100 has the value ";	// ����� �������� ��������� x = 100
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x < 3 has the value ";		// ����� �������� ��������� x < 3
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";		// ����� �������� ��������� x > 3
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);						// ����� �������� C++
	cout << "The expression x < 3 has the value ";		// ����� �������� ��������� x < 3
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";		// ����� �������� ��������� x > 3
	cout << (x > 3) << endl;
	return 0;
}