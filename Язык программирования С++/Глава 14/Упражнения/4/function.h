#ifndef FUNCTION_H_   
#define FUNCTION_H_  
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class Person
{
private:
	std::string ferstname;
	std::string lastname;
public:
	Person();
	Person(const char* str1, const char* str2);
	Person(const Person& pe);
	~Person();
	Person& operator= (const Person& pe);

	virtual void Show();
};

class Guslinger : virtual public Person
{
private:
	double second;
	int serifs;
public:
	Guslinger();
	Guslinger(const char* str1, const char* str2, double se, int ser);
	Guslinger(const Guslinger& gu);
	~Guslinger();
	Guslinger& operator= (const Guslinger& gu);

	double Drav();
	virtual void Show();
};

class Card
{
private:
	std::string suit;
	int num;
public:
	Card();
	Card(std::string str, int n);
	Card(const Card& ca);
	~Card();
	Card& operator= (const Card& ca);

	std::string& suitret();
	int numret();
	void Show();
};

class PokerPlayer : virtual public Person
{
private:
	Card ca;
public:
	PokerPlayer();
	PokerPlayer(const char* str0, int n, const char* str1, const char* str2);
	PokerPlayer(PokerPlayer& pp);
	~PokerPlayer();
	PokerPlayer& operator= (const PokerPlayer& pp);

	Card& Draw();
	virtual void ShowPP();
	void Showonlicard();
};

class BadDude : virtual public PokerPlayer, virtual public Guslinger
{
private:
	double second;
public:
	BadDude();
	BadDude(const char* str0, int n, const char* str1, const char* str2, double se, int ser, double sec);
	BadDude(BadDude& bd);
	~BadDude();
	BadDude& operator= (const BadDude& bd);

	double Gdraw();
	Card& Cdraw();
	void ShowBD();
};
#endif