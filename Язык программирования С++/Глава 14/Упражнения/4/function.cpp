#include "function.h"

Person::Person()
{
	ferstname = "null";
	lastname = "null";
}

Person::Person(const char* str1, const char* str2)
{
	ferstname = str1;
	lastname = str2;
}

Person::Person(const Person& pe)
{
	ferstname = pe.ferstname;
	lastname = pe.lastname;
}

Person::~Person()
{
}
Person& Person::operator= (const Person& pe)
{
	if (&pe == this)
		return *this;
	ferstname = pe.ferstname;
	lastname = pe.lastname;
	return *this;
}
void Person::Show()
{
	std::cout << ferstname << std::endl << lastname << std::endl;
}


Guslinger::Guslinger() : Person()
{
	second = 0.0;
	serifs = 0;
}

Guslinger::Guslinger(const char* str1, const char* str2, double se, int ser) : Person(str1, str2)
{
	second = se;
	serifs = ser;
}

Guslinger::Guslinger(const Guslinger& gu) : Person(gu)
{
	second = gu.second;
	serifs = gu.serifs;
}

Guslinger::~Guslinger()
{
}

Guslinger& Guslinger::operator= (const Guslinger& gu)
{
	if (&gu == this)
		return *this;
	Person::operator=(gu);
	second = gu.second;
	serifs = gu.serifs;
	return *this;
}

double Guslinger::Drav()
{
	return second;
}

void Guslinger::Show()
{
	Person::Show();
	std::cout << "second: " << second << std::endl << "serifs: " << serifs << std::endl;
}


Card::Card()
{
	int buf = 0;
	srand(time(NULL));
	buf = rand() % 4;

	switch (buf)
	{
	case 0:
		suit = "Diamonds";
		break;
	case 1:
		suit = "Hearts";
		break;
	case 2:
		suit = "Clubs";
		break;
	case 3:
		suit = "Spades";
		break;
	}
	num = (rand() % 13) + 1;
}

Card::Card(std::string str, int n)
{
	if (n < 14 && n > 0)
		num = n;
	else
		std::cout << "Card eror" << std::endl;
	if (str == "Diamonds")
		suit = "Diamonds";
	else if (str == "Hearts")
		suit = "Hearts";
	else if (str == "Clubs")
		suit = "Clubs";
	else if (str == "Spades")
		suit = "Spades";
	else
		std::cout << "Card eror" << std::endl;
}

Card::Card(const Card& ca)
{
	suit = ca.suit;
	num = ca.num;
}

Card::~Card()
{
}

Card& Card::operator= (const Card& ca)
{
	if (&ca == this)
		return *this;
	suit = ca.suit;
	num = ca.num;
	return *this;
}

std::string& Card::suitret()
{
	return suit;
}

int Card::numret()
{
	return num;
}

void Card::Show()
{
	std::cout << "suit: " << suit << std::endl << "num: " << num << std::endl;
}


PokerPlayer::PokerPlayer() : Person()
{
}

PokerPlayer::PokerPlayer(const char* str0, int n, const char* str1, const char* str2) : Person(str1, str2)
{
	ca = Card::Card(str0, n);
}

PokerPlayer::PokerPlayer(PokerPlayer& pp) :Person(pp)
{
	ca = pp.ca;
}

PokerPlayer::~PokerPlayer()
{
}

Card& PokerPlayer::Draw()
{
	return ca;
}

PokerPlayer& PokerPlayer::operator= (const PokerPlayer& pp)
{
	if (&pp == this)
		return *this;
	ca = pp.ca;
	return *this;
}

void PokerPlayer::ShowPP()
{
	Person::Show();
	ca.Show();
}

void PokerPlayer::Showonlicard()
{
	ca.Show();
}


BadDude::BadDude() : PokerPlayer(), Guslinger()
{
}

BadDude::BadDude(const char* str0, int n, const char* str1, const char* str2, double se, int ser, double sec) : PokerPlayer(str0, n, str1, str2), Guslinger(str1, str2, se, ser), Person(str1, str2)
{
	second = sec;
}

BadDude::BadDude(BadDude& bd)
{
	PokerPlayer::operator=(bd);
	Guslinger::operator=(bd);
	second = bd.second;
}

BadDude::~BadDude()
{
}

BadDude& BadDude::operator= (const BadDude& bd)
{
	if (&bd == this)
		return *this;
	PokerPlayer::operator=(bd);
	Guslinger::operator=(bd);
	second = bd.second;
	return *this;
}
double BadDude::Gdraw()
{
	return second;
}

Card& BadDude::Cdraw()
{
	return PokerPlayer::Draw();
}

void BadDude::ShowBD()
{
	Guslinger::Show();
	PokerPlayer::Showonlicard();
}