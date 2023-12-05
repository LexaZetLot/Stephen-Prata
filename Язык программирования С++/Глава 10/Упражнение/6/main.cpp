#include "function.h"

int main(void)
{
	Move list1 = Move::Move(3, 3);
	Move list2 = Move::Move(4, 4);
	list1.showmove();
	list1.Move_add(list2);
	list1.showmove();
	list1.reset(5, 5);
	list1.showmove();
	return 0;
}