#include "function.h"

int main(void)
{
	Person list1;
	Person list2 = Person("fasdasdsa", "dsadasda");
	Person list3 = Person("dasads");
	list1.Show();
	list1.FormalShow();
	list2.Show();
	list2.FormalShow();
	list3.Show();
	list3.FormalShow();
	return 0;
}