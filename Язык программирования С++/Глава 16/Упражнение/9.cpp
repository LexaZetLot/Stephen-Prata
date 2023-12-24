#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <list>

#define N 10000000

void out(int n) { std::cout << n << ' '; }

int main(void)
{
	std::vector <int> vi0;
	std::vector <int> vi;
	std::list <int> li;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < N; i++)
		vi0.push_back(rand());
	std::copy(vi0.begin(), vi0.end(), std::back_inserter(li));
	vi = vi0;

	clock_t start1 = clock();
	std::sort(vi.begin(), vi.end());
	clock_t end1 = clock();
	std::cout << (double)((end1 - start1) / CLOCKS_PER_SEC) << std::endl;

	clock_t start2 = clock();
	li.sort();
	clock_t end2 = clock();
	std::cout << (double)((end2 - start2) / CLOCKS_PER_SEC) << std::endl;

	std::copy(vi0.begin(), vi0.end(), std::back_inserter(li));
	clock_t start3 = clock();
	std::copy(li.begin(), li.end(), std::back_inserter(vi));
	std::sort(vi.begin(), vi.end());
	std::copy(vi.begin(), vi.end(), std::back_inserter(li));
	clock_t end3 = clock();
	std::cout << (double)((end3 - start3) / CLOCKS_PER_SEC) << std::endl;
	return 0;
}