#include <iostream>
#include <algorithm>
#include <vector>

std::vector <int> Loto(int num, int size);

int main(void)
{
	std::vector <int> winers;
	winers = Loto(51, 6);
	for (int i = 0; i < winers.size(); i++)
		std::cout << winers[i] << ' ';

	return 0;
}

std::vector <int> Loto(int num, int size)
{
	std::vector <int> buf;
	for (int i = 1; i <= num; i++)
		buf.push_back(i);

	std::random_shuffle(buf.begin(), buf.end());
	buf.resize(size);

	return buf;
}