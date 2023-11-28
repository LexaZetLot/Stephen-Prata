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
	struct CandyBar snack[3] =
	{
		{
			"Mocha Munch1",
			2.3f,
			350
		},
		{
			"Mocha Munch2",
			2.4f,
			351
		},
		{
			"Mocha Munch3",
			2.5f,
			352
		}
	};
	cout << snack[0].name << endl << snack[0].pount << endl << snack[0].cal << endl;
	cout << snack[1].name << endl << snack[1].pount << endl << snack[1].cal << endl;
	cout << snack[2].name << endl << snack[2].pount << endl << snack[2].cal;
	return 0;
}