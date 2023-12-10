// tabtenn1.cpp -- ������ �������� �������� ������
#include "tabtenn1.h"
#include <iostream>


TableTennisPlayer::TableTennisPlayer(const string& fn,
	const string& In, bool ht) : firstname(fn),
	lastname(In), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}

// ������ RatedPlayer 
RatedPlayer::RatedPlayer(unsigned int r, const string& fn,
	const string& In, bool ht) : TableTennisPlayer(fn, In, ht)
{
	rating = r;
}
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp)
	: TableTennisPlayer(tp), rating(r)
{
}