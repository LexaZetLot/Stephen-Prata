#include <iostream>
int main(void)
{
	using namespace std;
	double ted = 1;
	double* p;
	p = &ted;
	cout << *p;
	return 0;
}