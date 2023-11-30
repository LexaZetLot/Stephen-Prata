#include <iostream>
const int dafna = 100;
int main(void)
{
	double kleo = 100, dafn = 100;
	int i = 0;

	do
	{
		dafn += dafna * 0.1;
		kleo += kleo * 0.05;
		i++;
	} while (kleo < dafn);
	std::cout << i;

	return 0;
}