#include <iostream>
#include <array>
const int N = 101;
int main(void)
{
	std::array<long double, N> arr;

	arr[1] = arr[0] = 1LL;

	for (int i = 2; i < N; i++)
		arr[i] = i * arr[i - 1];

	for (int i = 0; i < N; i++)
		std::cout << i << " ! = " << arr[i] << std::endl;

	return 0;
}