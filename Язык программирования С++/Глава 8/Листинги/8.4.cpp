// swaps.��� -- ����� ���������� � ������� ������ � ����������
#include <iostream>
void swapr(int& a, int& b);					// a, b - ���������� ��� int 
void swapp(int* p, int* q);					// p, q - ������ int 
void swapv(int a, int b);					// a, b - ����� ���������� 
int main(void)
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "walletl = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	// ������������� ������ ��� ������ ����������� 
	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);				// �������� ���������� 
	cout << "walletl = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	// ������������� ���������� ��� ������ ����������� 
	cout << "Using pointers to swap contents again:\n";
	swapp(&wallet1, &wallet2);				// �������� ������� ���������� 
	cout << "walletl = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	// ������� ������������� �������� �� �������� 
	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);				// �������� �������� ���������� 
	cout << "walletl = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	return 0;
}
void swapr(int& a, int& b)					// ������������� ������ 
{
	int temp;
	temp = a;			// ������������� a, b ��� ��������� �������� ���������� 
	a = b;
	b = temp;
}

void swapp(int* p, int* q)					// ������������� ���������� 
{
	int temp;
	temp = *p;			// ������������� *�, *q ��� ��������� �������� ���������� 
	*p = *q;
	*q = temp;
}

void swapv(int a, int b) // ������� ������������� �������� 
{
	int temp;
	temp = a;			 // ������������� a, b ��� ��������� �������� ���������� 
	a = b;
	b = temp;
}