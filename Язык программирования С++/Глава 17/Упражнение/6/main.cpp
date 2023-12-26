#include <fstream>
#include "function.h" 

void menu();
int main(void)
{
	int i;
	char ch;
	std::ofstream fp_0("file.txt", std::ios_base::out | std::ios_base::app);
	std::ifstream fp_1("file.txt", std::ios_base::out | std::ios_base::app);
	employee em;
	manager ma;
	fink fi;
	highfink hf;

	fp_1.seekg(std::ios::beg);
	while (!fp_1.eof())
	{
		fp_1 >> i;
		switch (i)
		{
		case 1:
			fp_1 >> em;
			std::cout << em << std::endl;
			break;
		case 'b':
			fp_1 >> ma;
			std::cout << ma << std::endl;
			break;
		case 'c':
			fp_1 >> fi;
			std::cout << fi << std::endl;
			break;
		case 'd':
			fp_1 >> hf;
			std::cout << hf << std::endl;
			break;
		}
		i = 0;
	}
	fp_1.seekg(std::ios::beg);

	menu();
	while (std::cin >> ch && ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			fp_0.seekp(std::ios::end);
			em.SetAll();
			std::cout << em << std::endl;
			fp_0 << 1 << '\n';
			fp_0 << em;
			break;
		case 'b':
			fp_0.seekp(std::ios::end);
			ma.SetAll();
			std::cout << ma << std::endl;
			fp_0 << 2 << '\n';
			fp_0 << ma;
			break;
		case 'c':
			fp_0.seekp(std::ios::end);
			fi.SetAll();
			std::cout << fi << std::endl;
			fp_0 << 3 << '\n';
			fp_0 << fi;
			break;
		case 'd':
			fp_0.seekp(std::ios::end);
			hf.SetAll();
			std::cout << hf << std::endl;
			fp_0 << 4 << '\n';
			fp_0 << hf;
			break;
		}
		menu();
	}

	fp_1.seekg(std::ios::beg);
	while (!fp_1.eof())
	{
		fp_1 >> i;
		switch (i)
		{
		case 1:
			fp_1 >> em;
			std::cout << em << std::endl;
			break;
		case 'b':
			fp_1 >> ma;
			std::cout << ma << std::endl;
			break;
		case 'c':
			fp_1 >> fi;
			std::cout << fi << std::endl;
			break;
		case 'd':
			fp_1 >> hf;
			std::cout << hf << std::endl;
			break;
		}
		i = 0;
	}

	return 0;
}


void menu()
{
	std::cout << "a - employee				b - manager" << std::endl;
	std::cout << "c - fink					d - highfink" << std::endl;
	std::cout << "q - end" << std::endl;
}