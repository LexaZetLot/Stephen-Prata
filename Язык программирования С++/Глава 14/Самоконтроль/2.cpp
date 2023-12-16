class Frabjous
{
private:
	char fab[20];
public:
	Frabjous(const char* s = "C++") : fab(s) { }
	virtual void tell() { cout << fab; }
};
class Gloam
{
private:
	int glip;
	Frabjous fb;
public:
	Gloam(int g = 0, const char* s = "C++") : glip(g), fb(s) {}
	Gloam(int g, const Frabjous& f) : glip(g), fb(f) {}
	void tell() { Frabjous::tell(); cout << glip << endl; }

};