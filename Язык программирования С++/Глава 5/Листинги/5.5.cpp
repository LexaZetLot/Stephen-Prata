// bigstep.срр -- цикл указанным пользователем шагом 
#include <iostream>
int main(void)
{
	using std::cout;				// объ€вление using 
	using std::cin;
	using std::endl;
	cout << "Enter an integer: ";	// ввод целого числа 
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;
	return 0;
}