// convert.cpp -- преобразует стоуны в фунты
#include <iostream>
int stonetold(int sts);// прототип функции
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