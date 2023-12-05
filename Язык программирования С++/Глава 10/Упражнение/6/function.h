#ifndef FUNCTION 
#define FUNCTION 
class Move
{
private:
	double x;
	double y;
public:
	Move(double a, double b);
	void showmove() const;
	void Move_add(const Move& m);
	void reset(double a, double b);
};
#endif