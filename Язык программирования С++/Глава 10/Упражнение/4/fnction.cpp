#include <iostream>
#include "function.h"

SALES::Sales::Sales(const double* arr, int n)
{
	int buf_max;
	int buf_min;
	max_min_search(arr, n, buf_max, buf_min);
	max = arr[buf_max];
	min = arr[buf_min];
	avg(arr, n, average);

	for (int i = 0; i < n; i++)
		sales[i] = arr[i];
	if (n <= SALES::QUARTERS)
		for (int i = n; i < SALES::QUARTERS; i++)
			sales[i] = 0;
}

void SALES::Sales::setSales()
{
	for (int i = 0; i < 4; i++)
		std::cin >> sales[i];

	int buf_max;
	int buf_min;
	max_min_search(sales, SALES::QUARTERS, buf_max, buf_min);
	max = sales[buf_max];
	min = sales[buf_min];
	avg(sales, SALES::QUARTERS, average);
}

void SALES::Sales::showSales() const
{
	for (int i = 0; i < SALES::QUARTERS; i++)
		std::cout << "sales " << i << ": " << sales[i] << std::endl;

	std::cout << "average: " << average << std::endl;
	std::cout << "max: " << max << std::endl;
	std::cout << "min: " << min << std::endl;
}

void SALES::Sales::max_min(const double x, const double y, int index, int& indexX, int& indexY)
{
	if (x > y)
	{
		indexX = index;
		indexY = index + 1;
	}
	else
	{
		indexY = index;
		indexX = index + 1;
	}
}

void SALES::Sales::max_min_search(const double* arr, int size, int& max_index, int& min_index)
{
	if (size > 0)
	{
		int search;
		if ((size % 2) == 0)
			search = 0;
		else
			search = 1;

		int indexX, indexY;
		max_index = 0;
		min_index = 0;
		for (int i = search; i < size - 1; i += 2)
		{
			max_min(arr[i], arr[i + 1], i, indexX, indexY);
			if (arr[max_index] < arr[indexX])
				max_index = indexX;
			if (arr[min_index] > arr[indexY])
				min_index = indexY;
		}
	}
	else
		return;
}

void SALES::Sales::avg(const double* arr, int size, double& avg)
{
	avg = 0;
	for (int i = 0; i < size; i++)
		avg += arr[i];
	avg /= size;
}