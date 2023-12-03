// static.срр -- использование статической локальной переменной 
#include <iostream>
//  онстанты 
const int ArSize = 10;
// ѕрототип функции 
void strcount(const char* str);

int main(void)
{
	using namespace std;
	char input[ArSize];
	char next;
	cout << "Enter a line:\n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')		// строка не помещаетс€; 
			cin.get(next);			// избавитьс€ от остатка 
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, ArSize);
	}
	cout << "Bye\n";
	return 0;
}
void strcount(const char* str)
{
	using namespace std;
	static int total = 0;			// статическа€ локальна€ переменна€ 
	int count = 0;					// автоматическа€ локальна€ переменна€ 
	cout << "\"" << str << "\" contains ";
	while (*str++)					// переход к концу строки 
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}