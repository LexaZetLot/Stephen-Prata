#include <iostream>
#include <string>
int main(void)
{
	using namespace std;
	string ch;
	int i = -1;
	do
	{
		cin >> ch;
		i++;
	} while (ch != "done");
	cout << "You've entered " << i << " words";
	return 0;
}