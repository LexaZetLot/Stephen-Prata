// secref.��� -- ����������� � ������������� ������ 
#include <iostream>
int main(void)
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;								// rodents - ��� ������ 
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl; // ����� ������� rats � rodents 
	int bunnies = 50;
	rodents = bunnies;									// ����� �� �������� ������? 
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl; // ����� ������� bunnies � rodents 
	return 0;
}