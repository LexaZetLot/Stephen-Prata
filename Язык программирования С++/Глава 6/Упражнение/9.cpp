#include <iostream>
#include <fstream>
#include <string>
struct list {
	std::string name;
	double num;
};
int main(void)
{
	std::ifstream fp;
	fp.open("carinfo.txt");
	struct list* list1;
	int size;
	int j = 0;
	(fp >> size).get();
	list1 = new struct list[size];
	for (int i = 0; i < size; i++)
	{
		std::getline(fp, list1[i].name);
		(fp >> list1[i].num).get();
	}
	std::cout << "Grand Patrons" << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (list1[i].num >= 10000)
		{
			std::cout << list1[i].name << " - " << list1[i].num << std::endl;
			j++;
		}
		if ((i == (size - 1)) && (j == 0))
			std::cout << "none" << std::endl;
	}
	std::cout << "Patrons" << std::endl;
	for (int i = 0; i < size; i++)
	{

		if (list1[i].num < 10000)
		{
			std::cout << list1[i].name << " - " << list1[i].num << std::endl;
			j++;
		}
		if ((i == (size - 1)) && (j == 0))
			std::cout << "none" << std::endl;
	}
	return 0;
}