#include "function.h"

complex::complex(const double rl, const double im)
{
	real = rl;
	imaginary = im;
}
complex::complex()
{
	real = 0.0;
	imaginary = 0.0;
}
complex::~complex()
{
}
complex complex::operator+ (const complex& cm) const
{
	complex buf;
	buf.real = real + cm.real;
	buf.imaginary = imaginary + cm.imaginary;
	return buf;
}
complex complex::operator- (const complex& cm) const
{
	complex buf;
	buf.real = real - cm.real;
	buf.imaginary = imaginary - cm.imaginary;
	return buf;
}
complex complex::operator* (const complex& cm) const
{
	complex buf;
	buf.real = real * cm.real - imaginary * cm.imaginary;
	buf.imaginary = real * cm.imaginary + imaginary * cm.real;
	return buf;
}
complex complex::operator~ ()
{
	imaginary = -imaginary;
	return *this;
}
complex operator*(const double n, const complex& cm)
{
	complex buf = cm;
	buf.real *= n;
	buf.imaginary *= n;
	return buf;
}
std::ostream& operator<<(std::ostream& os, const complex& cm)
{
	os << cm.real << '(' << cm.imaginary << ")i";
	return os;
}
std::istream& operator>>(std::istream& is, complex& cm)
{
	std::cout << "real: ";
	is >> cm.real;
	std::cout << "imaginary: ";
	is >> cm.imaginary;
	return is;
}