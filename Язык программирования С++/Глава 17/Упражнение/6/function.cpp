#include "function.h"

abstr_emp::abstr_emp()
{
	fname = "null";
	lname = "null";
	job = "null";
}

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string& j)
{
	fname = fn;
	lname = ln;
	job = j;
}

void abstr_emp::ShowAll() const
{
	std::cout << "fname: " << fname << std::endl
		<< "lname: " << lname << std::endl
		<< "job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
	std::cout << "fname: ";
	std::cin >> fname;
	std::cout << "lname: ";
	std::cin >> lname;
	std::cout << "job: ";
	std::cin >> job;
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
	os << e.fname << '\n'
		<< e.lname << '\n'
		<< e.job << '\n';
	return os;
}

std::istream& operator>>(std::istream& os, abstr_emp& e)
{
	os >> e.fname >> e.lname >> e.job;
	return os;
}


abstr_emp::~abstr_emp()
{
}

employee::employee() :abstr_emp()
{
}

employee::employee(const std::string& fn, const std::string& ln, const std::string& j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

manager::manager() :abstr_emp()
{
	inchargeof = 0;
}

manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp(fn, ln, j)
{
	inchargeof = ico;
}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e)
{
	inchargeof = ico;
}

manager::manager(const manager& m) : abstr_emp(m)
{
	inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "inchargeof: " << inchargeof << std::endl;
}

std::ostream& operator<<(std::ostream& os, const manager& m)
{
	os << (abstr_emp&)m
		<< m.inchargeof << '\n';
	return os;
}

std::istream& operator<<(std::istream& os, manager& m)
{
	os >> (abstr_emp&)m >> m.inchargeof;
	return os;
}


void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "inchargeof: ";
	std::cin >> inchargeof;
}

fink::fink() :abstr_emp()
{
	reportsto = "null";
}

fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) : abstr_emp(fn, ln, j)
{
	reportsto = rpo;
}

fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e)
{
	reportsto = rpo;
}

fink::fink(const fink& e) : abstr_emp(e)
{
	reportsto = e.reportsto;
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "reportsto: " << reportsto << std::endl;
}

std::ostream& operator<<(std::ostream& os, const fink& f)
{
	os << (abstr_emp&)f
		<< f.reportsto << '\n';
	return os;
}

std::istream& operator<<(std::istream& os, fink& f)
{
	os >> (abstr_emp&)f >> f.reportsto;
	return os;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "reportsto: ";
	std::cin >> reportsto;
}

highfink::highfink() :manager(), fink()
{
}

highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico) : fink(fn, ln, j, rpo), manager(fn, ln, j, ico)
{
}

highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico) : fink(e, rpo), manager(e, ico)
{
}

highfink::highfink(const fink& f, int ico) :abstr_emp(f), fink(f), manager(f, ico)
{
}

highfink::highfink(const manager& m, const std::string& rpo) :abstr_emp(m), manager(m), fink(m, rpo)
{
}

highfink::highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "inchargeof: " << manager::InChargeOf() << std::endl;
	std::cout << "reportsto: " << fink::ReportsTo() << std::endl;
}

void highfink::SetAll()
{
	fink::SetAll();
	set_int();
}

std::ostream& operator<<(std::ostream& os, const highfink& h)
{
	int n = ((manager&)h).set_ret();
	os << (fink&)h << n;
	return os;
}

std::istream& operator<<(std::istream& os, highfink& h)
{
	int n;
	os >> (fink&)h >> n;
	((manager&)h).set_int(n);
	return os;
}