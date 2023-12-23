#include <iostream>
#include <string>
#include <algorithm>
#define N 4

template <class T>
int reduce(T* arr, int n);

int main(void)
{
	long* arr;
	int num;
	arr = (long*)malloc(N * sizeof(long));
	arr[0] = 4;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 2;
	std::string str[] = { "qeer", "fasdasd", "qeer", "sadassad" };

	num = reduce(str, N);

	for (int i = 0; i < num; i++)
		std::cout << str[i] << ' ';
	return 0;
}

template <class T>
int reduce(T* arr, int n)
{
	T* buf;
	int num = 0;
	std::sort(arr, arr + 4);
	buf = std::unique(arr, arr + 4);
	for (T* i = arr; i != buf; i++)
		num++;

	return num;
}