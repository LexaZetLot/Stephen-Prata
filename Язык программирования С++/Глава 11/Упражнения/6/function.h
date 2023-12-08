#ifndef STONEWT_H_ 
#define STONEWT_H_
class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	bool operator< (const Stonewt& st) const;
	bool operator> (const Stonewt& st) const;
	bool operator<= (const Stonewt& st) const;
	bool operator>= (const Stonewt& st) const;
	bool operator!= (const Stonewt& st) const;
	bool operator== (const Stonewt& st) const;
	void show_lbs() const;
	void show_stn() const;

	friend void max_min_search(const Stonewt* arr, int size, int& max_index, int& min_index);
	friend void max_min(const Stonewt& x, const Stonewt& y, int index, int& indexX, int& indexY);
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& t);
};
#endif