#include <iostream>
#include "function.h"

Stonewt::Stonewt(double lbs, MODE form)
{
	double x = lbs - (int)lbs;
	double y = 0.0;
	stone_double = lbs;
	stone_int = (int)lbs;
	pounds = lbs * Lbs_per_stn;
	y = (100 * (x * 10)) / Lbs_per_stn;
	pds_left = (y * Lbs_per_stn) / 100 + 0.5;
}
Stonewt::Stonewt(int stn, int lbs, MODE form)
{
	double x = lbs;
	stone_int = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	do
	{
		x /= 10;
	} while ((int)x);
	stone_double = stn + x;
}
Stonewt::Stonewt()
{
	stone_int = 0;
	stone_double = 0;
	pds_left = 0;
	pounds = 0;
	mode = INT;
}

Stonewt::~Stonewt()
{
}


Stonewt operator+ (Stonewt& st1, Stonewt& st2)
{
	Stonewt buf;
	buf.stone_int = st1.stone_int + st2.stone_int;
	buf.stone_double = st1.stone_double + st2.stone_double;
	buf.pounds = st1.pounds + st2.pounds;
	buf.pds_left = st1.pds_left + st2.pds_left;
	if (buf.pds_left >= (int)Stonewt::Lbs_per_stn)
	{
		buf.stone_int += buf.pds_left / (int)Stonewt::Lbs_per_stn;
		buf.pds_left -= (buf.pds_left / (int)Stonewt::Lbs_per_stn) * (int)Stonewt::Lbs_per_stn;
	}
	return buf;
}

Stonewt operator- (Stonewt& st1, Stonewt& st2)
{
	Stonewt buf;
	buf.stone_int = st1.stone_int - st2.stone_int;
	buf.stone_double = st1.stone_double - st2.stone_double;
	buf.pounds = st1.pounds - st2.pounds;
	buf.pds_left = st1.pds_left - st2.pds_left;
	if (buf.pds_left < 0 && buf.pds_left > -(int)Stonewt::Lbs_per_stn && buf.stone_int > 0)
	{
		buf.pds_left += (int)Stonewt::Lbs_per_stn;
		buf.stone_int--;
	}

	if (buf.pds_left <= -(int)Stonewt::Lbs_per_stn && buf.stone_int <= 0)
	{
		buf.stone_int -= buf.pds_left / (int)Stonewt::Lbs_per_stn;
		buf.pds_left += (int)Stonewt::Lbs_per_stn;
	}
	if (buf.pds_left <= -(int)Stonewt::Lbs_per_stn && buf.stone_int > 0)
	{
		buf.stone_int -= buf.pds_left / (int)Stonewt::Lbs_per_stn;
		buf.pds_left += (buf.pds_left / (int)Stonewt::Lbs_per_stn) * (int)Stonewt::Lbs_per_stn;
		if (buf.pds_left != 0)
			buf.pds_left += buf.stone_int * (int)Stonewt::Lbs_per_stn;
	}
	return buf;
}

Stonewt operator* (Stonewt& st1, Stonewt& st2)
{
	Stonewt buf;
	buf.stone_int = st1.stone_int * st2.stone_int;
	buf.stone_double = st1.stone_double * st2.stone_double;
	buf.pounds = st1.pounds * st2.pounds;
	buf.pds_left = st1.pds_left * st2.pds_left;

	if (buf.pds_left >= (int)Stonewt::Lbs_per_stn)
	{
		buf.stone_int += buf.pds_left / (int)Stonewt::Lbs_per_stn;
		buf.pds_left -= (buf.pds_left / (int)Stonewt::Lbs_per_stn) * (int)Stonewt::Lbs_per_stn;
	}
	return buf;
}

std::ostream& operator<< (std::ostream& os, const Stonewt& st)
{
	if (st.mode == Stonewt::MODE::INT)
	{
		os << st.stone_int << " stone, " << st.pds_left << " pounds\n";
		os << st.pounds << " pounds\n";
	}
	else
		os << st.stone_double << " stone\n";
	return os;
}