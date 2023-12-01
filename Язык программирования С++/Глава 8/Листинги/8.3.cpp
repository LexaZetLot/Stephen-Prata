// secref.срр -- определение и использование ссылки 
#include <iostream>
int main(void)
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;								// rodents - это ссылка 
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl; // вывод адресов rats и rodents 
	int bunnies = 50;
	rodents = bunnies;									// можно ли изменить ссылку? 
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl; // вывод адресов bunnies и rodents 
	return 0;
}