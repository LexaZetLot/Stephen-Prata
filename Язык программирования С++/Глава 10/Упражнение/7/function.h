#ifndef FUNCTION 
#define FUNCTION 
class Plorge
{
private:
	char name[20];
	int ci;
public:
	Plorge(const char* str = "Plorga", int num = 50);
	void show() const;
	void set_ci(int num);
};
#endif