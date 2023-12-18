#include "function.h"

int main(void)
{
	BadDude list1("Diamonds", 12, "dasdsa", "dsadas", 12.1, 3, 1.2);
	list1.ShowBD();
	Guslinger list2("dsadas", "dasdsa", 2.1, 2);
	list2.Show();
	PokerPlayer list3("dsadad", 2, "ewqeqwe", "eqeqweq");
	list3.ShowPP();
	Person list4("dsada", "dsadsa");
	list4.Show();

	return 0;
}