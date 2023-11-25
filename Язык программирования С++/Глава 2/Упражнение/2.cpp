#include <iostream>

int fun(int num);

int main(void)
{
	using namespace std;
	int num;

	cout << "Enter the distance in furlongs" << endl;
	cin >> num;
	cout << "Distance in yards: " << fun(num) << endl;
	return 0;
}

int fun(int num)
{
	return num * 220;
}