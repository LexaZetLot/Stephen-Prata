// tabtenn0.cpp -- ������ �������� �������� ������
#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string& fn,
	const string& In, bool ht) : firstname(fn),
	lastname(In), hasTable(ht) { }
void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}