// pe14-1.cpp - класс Wine с использованием вклю€ений
#include "function.h"
int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Enter name of wine: ";			// ввод названи€ вина 
	char lab[50];
	cin.getline(lab, 50);
	cout << endl;
	cout << "Enter number of years: ";		// ввод количества годов сбора винограда 
	int yrs = 0;
	cin >> yrs;

	Wine holding(lab, yrs);			// сохранение названи€, лет, 
	// создание массивов из yrs элементов 
	holding.GetBottles();			// предложение ввести год и количество бутылок 
	holding.Show();					// вывод содержимого объекта 
	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };

	// —оздание нового объекта, инициализаци€ 
	// с использованием данных из массивов у и b 
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	std::cout << "Total bottles for " << more.Label()		// используетс€ метод Label() 
		<< ": " << more.sum() << std::endl; 			// используетс€ метод sum() 
	std::cout << "Bye\n";
	return 0;
}