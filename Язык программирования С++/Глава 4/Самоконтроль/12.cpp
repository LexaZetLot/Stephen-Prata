#include <iostream>
int main(void)
{
	using namespace std;
	float treacle[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	float* p;
	p = treacle;
	cout << *p << " " << *(p + 9);
	return 0;
}