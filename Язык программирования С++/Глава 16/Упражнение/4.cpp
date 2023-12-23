#include <iostream>
#include <algorithm>
#define N 4

int reduce(long* arr, int n);

int main(void)
{
	long* arr;
	int num;
	arr = (long*)malloc(N * sizeof(long));
	arr[0] = 4;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 2;

	num = reduce(arr, N);

	for (int i = 0; i < num; i++)
		std::cout << arr[i];
	return 0;
}

int reduce(long* arr, int n)
{
	long* buf;
	int num = 0;
	std::sort(arr, arr + 4);
	buf = std::unique(arr, arr + 4);
	for (long* i = arr; i != buf; i++)
		num++;

	arr = (long*)realloc(arr, num * sizeof(long));
	return num;
}