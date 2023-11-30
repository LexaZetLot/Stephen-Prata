#include <iostream>
#include <string>
struct car {
	std::string str;
	int ear;
};
int main(void)
{
	using namespace std;
	struct car* car1;
	int size;

	cout << "How many cars will fit in the catalog: ";
	cin >> size;
	car1 = new struct car[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Car ¹" << i + 1 << endl;
		cout << "Enter manufacturer: ";
		cin >> car1[i].str;
		cout << "Indicate the year of manufacture: ";
		cin >> car1[i].ear;
	}
	cout << "Here's your collection: " << endl;
	for (int i = 0; i < size; i++)
		cout << car1[i].ear << " " << car1[i].str << endl;
	return 0;
}