#include <iostream>
#include <string>
int main(void)
{
	using namespace std;
	string firstname;
	string lastname;

	cout << "Enter your first name: ";
	cin >> firstname;
	cout << "Enter your last name: ";
	cin >> lastname;
	lastname += ", ";
	lastname += firstname;
	cout << "Here's the information in a single string: " << lastname;
	return 0;
}