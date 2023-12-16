class Frabjous
{
private:
	char fab[20];
public:
	Frabjous(const char* s = "C++") : fab(s) { }
	virtual void tell() { cout << fab; }
};
class Gloam : private Frabjous
{
private:
	int glip;
	Frabjous fb;
public:
	Gloam(int g = 0, const char* s = "C++") : glip(g), Frabjousb(s) {}
	Gloam(int g, const Frabjous& f) : glip(g), Frabjous(f) {}
	void tell() { Frabjous::tell(); cout << glip << endl; }

};