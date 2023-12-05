// usetime2.cpp -- ������������� ������� �������� ������ ������ Time
// ������������� usetime2.��� � mytime2.cpp ������ 
#include <iostream>
#include "mytime2.h"
int main(void)
{
	using std::cout;
	using std::endl;

	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;

	cout << "weeding time = ";		// ����� �� ���������� 
	weeding.Show();
	cout << endl;

	cout << "waxing time = ";		// �������� ����� 
	waxing.Show();
	cout << endl;

	cout << "total work time = ";	// ����� ������� �����
	total = weeding + waxing;		// ������������ operator+() 
	total.Show();
	cout << endl;

	diff = weeding - waxing;		// ������������ operator-() 
	cout << "weeding time - waxing time = ";
	diff.Show();
	cout << endl;

	adjusted = total * 1.5;			// ������������ operator*() 
	cout << "adjusted work time = ";
	adjusted.Show();
	cout << endl;

	return 0;
}