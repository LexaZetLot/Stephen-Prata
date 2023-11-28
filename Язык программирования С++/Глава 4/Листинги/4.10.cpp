//strtype4.cpp -- ввод строки с пробелами 
#include <iostream>
#include <string>								// обеспечение доступа к классу string 
#include <cstring>								// библиотека обработки строк в стиле С 
int main()
{
	using namespace std;
	char charr[20];
	string str;

	// Длина строки в charr перед вводом 
	cout << "Length of string in charr before input: "
		<< strlen(charr) << endl;
	// Длина строки в str перед вводом 
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text:\n";			// ввод строки текста 
	cin.getline(charr, 20);						// указание максимальной длины 
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text:\n";	// ввод другой строки текста 
	getline(cin, str);		// теперь сіn - аргумент; спецификатор длины отсутствует 
	cout << "You entered: " << str << endl;
	// Длина строки в charr после ввода 
	cout << "Length of string in charr after input: "
		<< strlen(charr) << endl;
	// Длина строки в str после ввода 
	cout << "Length of string in str after input: "
		<< str.size() << endl;
	return 0;
}