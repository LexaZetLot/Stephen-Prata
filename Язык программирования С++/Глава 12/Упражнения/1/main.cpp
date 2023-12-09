#include "function.h"

int main(void)
{
	Cow list1;
	Cow list2 = Cow("dsasdas", "dadadas", 1.9);
	Cow list3 = list2;
	list1.ShowCow();
	list2.ShowCow();
	list3.ShowCow();

	return 0;
}