#include <iostream>
#include <string>

class Cpmv
{
public:
	struct Info
	{
		std::string qcode;
		std::string zcode;
	};
private:
	Info* pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv& cp);
	Cpmv(Cpmv&& mv);
	~Cpmv();
	Cpmv& operator = (const Cpmv& cp);
	Cpmv& operator = (Cpmv&& mv);
	Cpmv operator + (const Cpmv& obj) const;
	void Display() const;
};

Cpmv::Cpmv()
{
	pi = new Info;
}

Cpmv::Cpmv(std::string q, std::string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv& cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}
Cpmv::Cpmv(Cpmv&& mv)
{
	pi = new Info;
	pi->qcode = mv.pi->qcode;
	pi->zcode = mv.pi->zcode;
	mv.pi = nullptr;
}
Cpmv::~Cpmv()
{
	delete pi;
}
Cpmv& Cpmv::operator = (const Cpmv& cp)
{
	if (this == &cp)
		return *this;

	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;

	return *this;
}

Cpmv& Cpmv::operator = (Cpmv&& mv)
{
	if (this == &mv)
		return *this;
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;

	return *this;
}

Cpmv Cpmv::operator+ (const Cpmv& obj) const
{
	Cpmv buf;
	buf.pi->qcode = pi->qcode + obj.pi->qcode;
	buf.pi->zcode = pi->zcode + obj.pi->zcode;
	return buf;
}

void Cpmv::Display() const
{
	if (pi == nullptr)
		std::cout << "Error" << std::endl;
	else
		std::cout << pi->qcode << ", " << pi->zcode << std::endl;
}

int main(void)
{
	Cpmv list1("dsad", "dadsad");
	Cpmv list2 = list1;
	Cpmv list3;
	Cpmv list4 = list1 + list2;

	list1.Display();
	list2.Display();
	list3.Display();
	list4.Display();

	return 0;
}