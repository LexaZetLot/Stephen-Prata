#include <iostream>
#include <cstring>
int main(void)
{
	using namespace std;
	char ch[50];
	int i = -1;
	do
	{
		cin >> ch;
		i++;
	} while (strcmp(ch, "done"));
	cout << "You've entered " << i << " words";
	return 0;
}