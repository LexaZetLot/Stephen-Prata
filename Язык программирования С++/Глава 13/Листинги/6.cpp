// usett1.cpp -- ������������� �������� � ������������ �������
#include <iostream>
#include "tabtenn1.h"
int main(void)
{
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("����", "Boomdea", false);
	RatedPlayer rplayerl(1140, "Mallory", "Duck", true);
	rplayerl.Name(); // ������ ������������ ������ ���������� ����� �������� ������ 
	if (rplayerl.HasTable())
		cout << " : has a table. \n";
	else
		cout << " : hasn't a table. \n";
	player1.Name(); // ������ �������� ������ ���������� ����� �������� ������ 
	if (player1.HasTable())
		cout << " : has a table";
	else
		cout << " : hasn't a table. \n";
	cout << "Name: ";
	rplayerl.Name();
	cout << "; Rating: " << rplayerl.Rating() << endl;

	// ������������� ������� RatedPlayer � ������� ������� TableTennisPlayer 
	RatedPlayer rplayer2(1212, player1);
	cout << "Name: ";
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;
	return 0;
}