#include <iostream>

template <typename T>
T max5(T* arr);

int main(void)
{
	int arr[] = { 12, 43, 54, 21, 90 };
	double arr1[] = { 45.3, 31.5, 34321.2, 43.2, 321.2 };

	std::cout << max5(arr) << " " << max5(arr1);

	return 0;
}
template <typename T>
T max5(T* arr)
{
	T max = arr[0];
	for (int i = 0; i < 5; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}