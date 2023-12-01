#include <iostream>
struct aplicant {
	char name[30];
	int cradit_ratings[3];
};
void f1(struct aplicant* list1);
void f2(struct aplicant list1);

int main(void)
{
	return 0;
}
void f1(struct aplicant* list1)
{
	std::cout << list1->name << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << list1->cradit_ratings[i] << ' ';
}
void f2(struct aplicant list1)
{
	std::cout << list1.name << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << list1.cradit_ratings[i] << ' ';
}