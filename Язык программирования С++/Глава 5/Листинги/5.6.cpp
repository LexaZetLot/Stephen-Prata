// forstr1.cpp -- использование цикла for для строки
#include <iostream>
#include <string>
int main(void)
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	// Отображение символов в обратном порядке 
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
	cout << "\nBye.\n";
	return 0;
}