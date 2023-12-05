#include <iostream>
#include "function.h" 

Move::Move(double a = 0, double b = 0)
{
	x = a;
	y = b;
}
void Move::showmove() const
{
	std::cout << x << " " << y << std::endl;
}
void Move::Move_add(const Move& m)
{
	x = m.x;
	y = m.y;
}
void Move::reset(double a = 0, double b = 0)
{
	x = a;
	y = b;
}