#include <iostream>
struct CandyBar
{
	char name[40];
	float pount;
	int cal;
};
int main(void)
{
	using namespace std;
	struct CandyBar snack =
	{
		"Mocha Munch",
		2.3f,
		350
	};
	cout << snack.name << endl << snack.pount << endl << snack.cal;
	return 0;
}