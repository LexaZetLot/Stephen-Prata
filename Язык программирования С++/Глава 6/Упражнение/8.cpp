#include <iostream>
#include <fstream>
int main(void)
{
	std::ifstream fp;
	fp.open("carinfo.txt");
	char ch;
	int i = 0;
	while (fp >> ch)
		i++;
	std::cout << i;
	return 0;
}