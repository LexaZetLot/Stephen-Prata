// choices.��� -- ����� ������� 
#include <iostream>
template<typename T>     // ��� template <class T> 
T lesser(T �, T b)		 // #1 
{
	return � < b ? � : b;
}
int lesser(int a, int b) // #2 
{
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}
int main(void)
{
	using namespace std;
	int m = 20;
	int n = -30;
	double x = 15.5;
	double y = 25.9;
	cout << lesser(m, n) << endl;		// ������������ #2 
	cout << lesser(x, y) << endl;		// ������������ #1 � double 
	cout << lesser<>(m, n) << endl;		// ������������ #1 � int 
	cout << lesser<int>(x, y) << endl;	// ������������ #1 � int 
	return 0;
}