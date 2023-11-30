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
	int arr[3][12];
	int arr_num[3] = { 0 };
	int num = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << str[j] << ": ";
			std::cin >> arr[i][j];
			arr_num[i] += arr[i][j];
		}
		num += arr_num[i];
	}

	for (int i = 0; i < 3; i++)
		std::cout << arr_num[i] << std::endl;
	std::cout << num;
	return 0;
}