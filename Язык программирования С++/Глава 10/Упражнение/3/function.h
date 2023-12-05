#ifndef FUNCTION 
#define FUNCTION 
class golf
{
private:
	enum { Len = 40 };
	char fullname[Len];
	int handicap;
public:
	void setgolf(const char* name, int hc);
	int setgolf();
	void set_handicap(int hc);
	void showgolf() const;
};
#endif