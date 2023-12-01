#include <iostream>
double f1(int* arr, int size);
int main(void)
{
	int arr[10] = { 0 };
	int flag = 0;
	std::cout << "Enter 10 values or a negative number to reduce : " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
		if (arr[i] < 0)
			break;
		flag++;
	}
	std::cout << f1(arr, flag);
	return 0;
}
double f1(int* arr, int size)
{
	int x = 0;
	for (int i = 0; i < size; i++)
		x += arr[i];

	return  x / size;
}