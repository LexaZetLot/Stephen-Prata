#include <iostream>
#include "namesp.h" 
int main(void)
{
	struct golf list;
	setgolf(list, "dadasda", 12);
	showgolf(list);
	setgolf(list);
	handicap(list, 15);
	showgolf(list);
	return 0;
}