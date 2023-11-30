// cingolf.срр -- нечисловой ввод пропускается
#include <iostream>
const int Max = 5;
int main(void)
{
	using namespace std;
	// Получение данных 
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n"; // ввод результатов в гольф
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i])) {
			cin.clear();     // сброс ввода 
			while (cin.get() != '\n')
				continue;    // отбрасывание некорректного ввода 
			cout << "Please enter a number: ";
		}
	}
	// Вычисление среднего 
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];
	// Вывод результатов
	cout << total / Max << " = average score "
		<< Max << " rounds\n";
	return 0;
}