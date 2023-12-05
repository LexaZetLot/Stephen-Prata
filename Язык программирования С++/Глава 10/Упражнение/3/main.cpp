##include <iostream>
#include "function.h" 
int main(void)
{
	struct golf list;
	list.setgolf("dadasda", 12);
	list.showgolf();
	list.setgolf();
	list.set_handicap(15);
	list.showgolf();
	return 0;
}