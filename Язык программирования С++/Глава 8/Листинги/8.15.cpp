// choices.ерр -- выбор шаблона 
#include <iostream>
template<typename T>     // или template <class T> 
T lesser(T а, T b)		 // #1 
{
	return а < b ? а : b;
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
	cout << lesser(m, n) << endl;		// используется #2 
	cout << lesser(x, y) << endl;		// используется #1 с double 
	cout << lesser<>(m, n) << endl;		// используется #1 с int 
	cout << lesser<int>(x, y) << endl;	// используется #1 с int 
	return 0;
}