#include <iostream>
#include <string>

struct candybar
{
	std::string name;
	double weight;
	double calories;
};

void initialization(struct candybar& list, const std::string str = "Millennium Munch", const double weight = 2.85, int const calories = 350);
void print(const struct candybar& list);

int main(void)
{
	struct candybar list;
	initialization(list);
	print(list);
	return 0;
}

void initialization(struct candybar& list, const std::string str, const double weight, int const calories)
{
	list.name = str;
	list.weight = weight;
	list.calories = calories;
}
void print(const struct candybar& list)
{
	std::cout << list.name << std::endl << list.weight << std::endl << list.calories;
}