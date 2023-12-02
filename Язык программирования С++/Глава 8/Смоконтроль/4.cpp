#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct stringy
{
	char* str;
	int ct;
};

void show(const char* str, int size = 1);
void show(const struct stringy& list, int size = 1);
void set(struct stringy& list, const char* str);

int main(void)
{
	stringy beany;
	char testing[] = "jksakasjdksakdjk kdsjfkjsdjfksd";
	set(beany, testing);

	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';

	show(testing);
	show(testing, 3);
	show("Done!");

	return 0;
}

void show(const char* str, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << str << std::endl;
}

void show(const struct stringy& list, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << list.str << std::endl;
}

void set(struct stringy& list, const char* str)
{
	list.str = new char[strlen(str)];
	strcpy(list.str, str);
}