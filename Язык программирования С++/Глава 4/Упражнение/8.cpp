#include <iostream>
#define N 40
struct CandyBar
{
	char name[N];
	float d;
	float pount;
};
int main(void)
{
	using namespace std;
	struct CandyBar* snack;
	snack = new struct CandyBar;
	cout << "Write the diameter of the pizza: ";
	cin >> snack->d;
	cin.get();
	cout << "Write the name of the company: ";
	cin.getline(snack->name, N);
	cout << "Write down the weight of the pizza: ";
	cin >> snack->pount;
	cout << "Parameters of the pizza:" << endl;
	cout << "Diameter: " << snack->d << endl;
	cout << "Name company: " << snack->name << endl;
	cout << "Wight: " << snack->pount;
	return 0;
}