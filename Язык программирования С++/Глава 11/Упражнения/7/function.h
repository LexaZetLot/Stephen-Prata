#ifndef STONEWT_H_ 
#define STONEWT_H_
#include <iostream>
class complex
{
private:
	double real;
	double imaginary;
public:
	complex(const double rl, const double im);
	complex();
	~complex();
	complex operator+ (const complex& cm) const;
	complex operator- (const complex& cm) const;
	complex operator* (const complex& cm) const;
	complex operator~ ();

	friend complex operator*(const double n, const complex& cm);
	friend std::ostream& operator<<(std::ostream& os, const complex& cm);
	friend std::istream& operator>>(std::istream& is, complex& cm);
};
#endif