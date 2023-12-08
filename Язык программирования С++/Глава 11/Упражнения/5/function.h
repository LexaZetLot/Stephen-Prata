#ifndef STONEWT_H_ 
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
	enum MODE {INT, DOUBLE};
private:
	enum { Lbs_per_stn = 14 };	
	int stone_int;				
	double stone_double;
	int pds_left;				
	int pounds;					
	MODE mode;
public:
	Stonewt(double lbs, MODE form = INT);		
	Stonewt(int stn, int lbs, MODE form = INT);	 
	Stonewt();					    
	~Stonewt();

	friend std::ostream& operator<< (std::ostream& os, const Stonewt& st);
	friend Stonewt operator+ (Stonewt& st1, Stonewt& st2);
	friend Stonewt operator- (Stonewt& st1, Stonewt& st2);
	friend Stonewt operator* (Stonewt& st1, Stonewt& st2);

};
#endif