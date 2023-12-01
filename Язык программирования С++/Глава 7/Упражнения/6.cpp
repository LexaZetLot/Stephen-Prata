#include <iostream>
void fill_array(double* arr, int size);
void show_array(double* arr, int size);
void reverse_array(double* arr, int size);
int main(void)
{
	using namespace std;
	double arr[9] = { 0 };
	fill_array(arr, 9);
	show_array(arr, 9);
	reverse_array(arr, 9);
	show_array(arr, 9);
	return 0;
}
void fill_array(double* arr, int size)
{
	for (int i = 0; i < size; i++)
		if (!(std::cin >> arr[i]))
			break;
}
void show_array(double* arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
void reverse_array(double* arr, int size)
{
	double buf = 0;
	for (int i = 0; i < size / 2; i++)
	{
		buf = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = buf;
	}
}