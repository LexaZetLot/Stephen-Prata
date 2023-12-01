#include <iostream>
struct aplicant {
	char name[30];
	int cradit_ratings[3];
};
typedef void (*p_f1)(struct aplicant*);
typedef const char* (*p_f2)(const struct aplicant*, const struct aplicant*);

int main(void)
{
	p_f1 p1 = f1;
	p_f2 p2 = f2;
	p_f1 ap[5];
	p_f2(*p2)[10];
	return 0;
}