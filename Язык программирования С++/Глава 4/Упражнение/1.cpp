#include <iostream>
int main(void)
{
	using namespace std;
	char name[40];
	char lastname[40];
	char ch;
	int age;

	cout << "What is your first name? ";
	cin.getline(name, 40);
	cout << "What is your last name? ";
	cin.getline(lastname, 40);
	cout << "What letter grade do you deserve? ";
	cin >> ch;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << lastname << ", " << name << endl;
	cout << "Grade: " << (char)(ch + 1) << endl;
	cout << "Age: " << age;
	return 0;
}