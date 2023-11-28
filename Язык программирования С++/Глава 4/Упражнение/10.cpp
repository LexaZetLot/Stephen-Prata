#include <iostream>
#include <array>
int main(void)
{
	using namespace std;
	array <int, 3> arr;

	cout << "Enter three values separated by a space: ";
	cin >> arr[0] >> arr[1] >> arr[2];
	cout << "arr[0] = " << arr[0] << " arr[1] = " << arr[1] << " arr[2] = " << arr[2] << " Medium: " << ((double)(arr[0] + arr[1] + arr[2])) / 3;
	return 0;
}