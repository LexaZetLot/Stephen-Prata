// arrobj.cpp -- функции с объектами array (С++11) 
#include <iostream>
#include <array> 
#include <string> 
// Константные данные 
const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
{ "Spring", "Summer", "Fall", "Winter" };
// Функция для изменения объекта array 
void fill(std::array<double, Seasons>* pa);
// Функция, использующая объект array, но не изменяющая его 
void show(std::array<double, Seasons> da);
int main(void)
{
	std::array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}
void fill(std::array<double, Seasons>* pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";		// ввод расходов по временам года 
		cin >> (*pa)[i];
	}
}
void show(std::array<double, Seasons> da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";									// вывод расходов по временам года 
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;			// вывод общей суммы расходов 
}