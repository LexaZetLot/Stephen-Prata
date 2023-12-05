#include <iostream>
#include "namesp.h"

static void max_min_search(const double* arr, int size, int& max_index, int& min_index);
static void max_min(const double x, const double y, int index, int& indexX, int& indexY);
static void avg(const double* arr, int size, double& avg);

void SALES::setSales(Sales& s, const double* arr, int n)
{
	int buf_max;
	int buf_min;
	max_min_search(arr, n, buf_max, buf_min);
	s.max = arr[buf_max];
	s.min = arr[buf_min];
	avg(arr, n, s.average);

	for (int i = 0; i < n; i++)
		s.sales[i] = arr[i];
	if (n <= SALES::QUARTERS)
		for (int i = n; i < SALES::QUARTERS; i++)
			s.sales[i] = 0;
}

void SALES::setSales(Sales& s)
{
	for (int i = 0; i < SALES::QUARTERS; i++)
		std::cin >> s.sales[i];

	int buf_max;
	int buf_min;
	max_min_search(s.sales, SALES::QUARTERS, buf_max, buf_min);
	s.max = s.sales[buf_max];
	s.min = s.sales[buf_min];
	avg(s.sales, SALES::QUARTERS, s.average);
}

void SALES::showSales(const Sales& s)
{
	for (int i = 0; i < SALES::QUARTERS; i++)
		std::cout << "sales " << i << ": " << s.sales[i] << std::endl;

	std::cout << "average: " << s.average << std::endl;
	std::cout << "max: " << s.max << std::endl;
	std::cout << "min: " << s.min << std::endl;
}

static void max_min(const double x, const double y, int index, int& indexX, int& indexY)
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

static void max_min_search(const double* arr, int size, int& max_index, int& min_index)
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

static void avg(const double* arr, int size, double& avg)
{
	avg = 0;
	for (int i = 0; i < size; i++)
		avg += arr[i];
	avg /= size;
}