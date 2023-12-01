#include <iostream>
long long fact(long long x);
int main(void)
{
	using namespace std;
	cout << fact(20);
	return 0;
}
long long fact(long long x)
{
	long long nun = x;
	if (x > 1)
		nun = x * fact(x - 1);
	return nun;
}