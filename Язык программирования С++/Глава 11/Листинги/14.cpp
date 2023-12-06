// vect.cpp -- ������ ������ Vector
#include <cmath>
#include "vect.h"		// �������� <iostream> 
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
namespace VECTOR
{
	// ��������� ���������� �������� � ����� ������� 
	const double Rad_to_deg = 45.0 / atan(1.0);
	// ������ ���� �������������� ����� 57.2 9577 95130823
	//  
	// �������� ������ 
	// ��������� ������ �� � � �
	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}
	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}
	// ������������� � �� �������� ����������� 
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	// ������������� � �� �������� ����������� 
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}



	// �������� ������ 
	Vector::Vector() // ����������� �� ��������� 
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}
	// ������������ ������ �� ������������� �����������, ���� form ����� RECT 
	// (�� ���������) , ��� �� �������� �����������, ���� form ����� POL 
	Vector::Vector(double nl, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = nl;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = nl;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			// ������������ ������ �������� Vector(); ������ ��������������� � � 
			cout << "Incorrect 3rd argument to Vector () -- ";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}

	}
	// ������������� ������ �� ������������� �����������, ���� form ����� RECT 
	// (�� ���������) , ��� �� �������� �����������, ���� ���� form ����� POL 
	void Vector::reset(double nl, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = nl;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = nl;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector () -- ";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}
	Vector::~Vector()			// ���������� 
	{
	}
	void Vector::polar_mode()	// ������������� ����� �������� ��������� 
	{
		mode = POL;
	}
	void Vector::rect_mode()	// ������������� ����� ������������� ��������� 
	{
		mode = RECT;
	}
	// ���������� �������� 
	// �������� ���� �������� 
	Vector Vector::operator+(const Vector& b) const
	{
		return Vector(x + b.x, y + b.y);
	}
	// ��������� ������� b �� � 
	Vector Vector::operator-(const Vector& b) const
	{
		return Vector(x - b.x, y - b.y);
	}
	// ����� ����� ������� �� ��������������� 
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}
	// ��������� ������� �� n 
	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}
	// ������������� ������ 
	// ��������� � �� ������ � � 
	Vector operator*(double n, const Vector& a)
	{
		return a * n;
	}
	// ���������� ������������� ����������, ���� mode ����� RECT, 
	// ��� ���������� �������� ����������, ���� mode ����� POL 
	std::ostream& operator<<(std::ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << " (x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << " (m,a) = (" << v.mag << ", "
				<< v.ang * Rad_to_deg << " ) ";
		}
		else
			os << "Vector object mode is invalid"; // ������������ ����� ������� Vector 
		return os;
	}
} // ����� ������������ ���� VECTOR 