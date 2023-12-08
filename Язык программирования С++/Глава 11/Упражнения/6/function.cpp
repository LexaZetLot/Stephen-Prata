#include <iostream>
using std::cout;
#include "function.h"

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}

bool Stonewt::operator< (const Stonewt& st) const
{
	return pounds < st.pounds;
}

bool Stonewt::operator> (const Stonewt& st) const
{
	return pounds > st.pounds;
}
bool Stonewt::operator>= (const Stonewt& st) const
{
	return pounds >= st.pounds;
}
bool Stonewt::operator<= (const Stonewt& st) const
{
	return pounds <= st.pounds;
}
bool Stonewt::operator!= (const Stonewt& st) const
{
	return pounds != st.pounds;
}
bool Stonewt::operator== (const Stonewt& st) const
{
	return pounds == st.pounds;
}

void max_min(const Stonewt& x, const Stonewt& y, int index, int& indexX, int& indexY)
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

void max_min_search(const Stonewt* arr, int size, int& max_index, int& min_index)
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

std::ostream& operator<<(std::ostream& os, const Stonewt& t)
{
	os << t.pounds;
	return os;
}