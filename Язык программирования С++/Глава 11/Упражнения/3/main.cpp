#include <iostream>
#include <cstdlib>			
#include <ctime>			
#include "function.h"

static void max_min_search(const int* arr, int size, int& max_index, int& min_index);
static void max_min(const int x, const int y, int index, int& indexX, int& indexY);
static void avg(const int* arr, int size, int& avg);

int main(void)
{
	using namespace std;
	using VECTOR::Vector;
	int num;
	int* arr;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int max = 0, min = 0, avg1 = 0;
	cout << "Enter (q to quit) : ";
	while (cin >> num)
	{
		arr = new int[num];
		for (int i = 0; i < num; i++)
		{
			target = rand() % 100 + 10;
			dstep = rand() % 20 + 10;
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			arr[i] = steps;
			steps = 0;
			result.reset(0.0, 0.0);
		}
		max_min_search(arr, num, max, min);
		avg(arr, num, avg1);
		cout << "max: " << arr[max] << endl << "min: " << arr[min] << endl << "avg: " << avg1 << endl;
		delete[] arr;
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != ' \n ')
		continue;
	return 0;
}

static void max_min(const int x, const int y, int index, int& indexX, int& indexY)
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

static void max_min_search(const int* arr, int size, int& max_index, int& min_index)
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

static void avg(const int* arr, int size, int& avg)
{
	avg = 0;
	for (int i = 0; i < size; i++)
		avg += arr[i];
	avg /= size;
}