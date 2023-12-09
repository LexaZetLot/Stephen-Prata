// sayings1.cpp -- использование расширенного класса String
// компилировать вместе с stringl.cpp 
#include <iostream>
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;
	String name;
	cout << "Hi, what's your name?\n>> ";									// ввод имени 
	cin >> name;
	cout << name << ", please enter up to " << ArSize
		<< " short sayings <empty line to quit>:\n";						// ввод поговорки 
	String sayings[ArSize];			// массив объектов 
	char temp[MaxLen];				// временное хранилище для строки 
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')										// пустая строка? 
			break;															// i не инкрементируется 
		else
			sayings[i] = temp;												// перегруженное присваивание 
	}
	int total = i; // общее количество прочитанных строк 
	if (total > 0)
	{
		cout << "Here are your sayings:\n";									// вывод поговорок 
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;
		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "Shortest saying:\n" << sayings[shortest] << endl;
		// Самая короткая поговорка 
		cout << "First alphabetically:\n" << sayings[first] << endl;
		// Первая по алфавиту 
		cout << "This program used " << String::HowMany()
			<< " String objects. Bye.\n";
		// Количество используемых объектов String 
	}
	else
		cout << "No input! Bye.\n";											// ничего не было введено 
	return 0;
}