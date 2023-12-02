#include <iostream>
#include <cctype>

template <typename T>
T max_arr(T* arr, int size);
const char* max_str(const char** str, int size);

int main(void)
{
	int arr[] = { 12, 43, 54, 21, 90, 100 };
	double arr1[] = { 45.3, 31.5, 34321.2, 43.2 };
	const char* str[] = { "sadadasd", "dasdasdasd", "dasdasd" };

	std::cout << max_arr(arr, 6) << " " << max_arr(arr1, 4) << std::endl;
	std::cout << max_str(str, 3);

	return 0;
}
template <typename T>
T max_arr(T* arr, int size)
{
	if (size > 0)
	{
		T max = arr[0];
		for (int i = 0; i < size; i++)
			if (max < arr[i])
				max = arr[i];
		return max;
	}
	else
		return -1;
}
const char* max_str(const char** str, int size)
{
	if (size > 0)
	{
		int max = (int)strlen(str[0]);
		int index = 0;
		int buf;
		for (int i = 0; i < size; i++)
			if (max < (buf = (int)strlen(str[i])))
			{
				max = buf;
				index = i;
			}
		return str[index];
	}
	else
		return NULL;
}
