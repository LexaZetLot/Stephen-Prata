#include <iostream>
#include <cstring>
int main(void)
{
	using namespace std;
	char firstname[40];
	char lastname[100];

	cout << "Enter your first name: ";
	cin.getline(firstname, 40);
	cout << "Enter your last name: ";
	cin.getline(lastname, 100);
	strcat(lastname, ", ");
	strcat(lastname, firstname);
	cout << "Here's the information in a single string: " << lastname;
	return 0;
}