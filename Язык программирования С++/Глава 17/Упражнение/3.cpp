#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	char ch;

	if (argc < 2)
		std::cout << "Error";
	std::ofstream fp_o(argv[1]);
	if (!fp_o.is_open())
		std::cout << "Error";
	std::ifstream fp_i(argv[2]);
	if (!fp_i.is_open())
		std::cout << "Error";

	while (fp_i.get(ch))
		fp_o.put(ch);

	return 0;
}