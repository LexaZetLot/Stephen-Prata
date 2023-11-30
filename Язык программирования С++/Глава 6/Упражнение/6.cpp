#include <iostream>
struct list {
	char name[50];
	double num;
};
int main(void)
{
	struct list* list1;
	int size;
	int j = 0;
	std::cout << "Enter the number of mecinates followed by their names and donations: ";
	std::cin >> size;
	list1 = new struct list[size];
	for (int i = 0; i < size; i++)
		std::cin >> list1[i].name >> list1[i].num;
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