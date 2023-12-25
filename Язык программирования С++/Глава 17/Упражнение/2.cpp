#include <iostream>
#include <fstream>

int main(void)
{
	char ch;
	std::ofstream fp;
	fp.open("file.txt");

	while (std::cin.get(ch))
		fp.put(ch);
	fp.close();
	return 0;
}