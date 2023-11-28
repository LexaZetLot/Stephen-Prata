// textin3.cpp -- чтение символов до конца файла 
#include <iostream>
int main(void)
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);								// попытка чтения символа 
	while (cin.fail() == false)					// проверка на EOF 
	{
		cout << ch;								// отображение символа 
		++count;
		cin.get(ch);							// попытка чтения следующего символа 
	}
	cout << endl << count << " characters read\n";
	return 0;
}