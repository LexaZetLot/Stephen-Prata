// convert.cpp -- ����������� ������ � �����
#include <iostream>
int stonetold(int sts);// �������� �������
int main(void)
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetold(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}
int stonetold(int sts)
{
	return 14 * sts;
}