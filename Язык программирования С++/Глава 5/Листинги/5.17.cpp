// textin2.срр -- использование cin.get(char) 
#include <iostream>
int main(void)
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);				// использование функции cin.get(ch) 
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);			// использование ее снова 
	}
	cout << endl << count << " characters read\n";
	return 0;
}