#include <fstream>
#include <vector>
#include <iostream>
#include <string>

int main(void)
{
	std::ifstream fp("file.txt");
	std::vector<std::string> str;
	std::string buf;

	while (fp >> buf)
		str.push_back(buf);

	std::cout << str.size() << std::endl;
	for (int i = 0; i < str.size(); i++)
		std::cout << str[i] << std::endl;
	return 0;
}