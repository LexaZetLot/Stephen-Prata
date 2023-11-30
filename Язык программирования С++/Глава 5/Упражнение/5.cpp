#include <iostream>
int main(void)
{
	const int size = 12;
	const char* str[size] =
	{
		"December",
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November"
	};
	int arr[12];
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << str[i] << ": ";
		std::cin >> arr[i];
		num += arr[i];
	}
	std::cout << num;
	return 0;
}