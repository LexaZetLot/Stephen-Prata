#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void f1(const struct box list1);
void f2(struct box* list1);
int main(void)
{
	struct box list =
	{
		"sadasdas",
		10,
		20,
		39,
		40
	};
	f1(list);
	f2(&list);
	return 0;
}
void f1(const struct box list1)
{
	std::cout << list1.maker << std::endl << list1.height
		<< std::endl << list1.width << std::endl << list1.length << std::endl << list1.volume << std::endl;
}
void f2(struct box* list1)
{
	list1->volume = list1->height * list1->length * list1->width;
}