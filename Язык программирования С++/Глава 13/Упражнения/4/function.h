#ifndef FUNCTION_H_     
#define FUNCTION_H_
#include <iostream>
class Port								// портвейн 
{
private:
	char* brand;
	char style[20];						// например, tawny (золотистый), ruby (рубиновый), vintage (марочный) 
	int bottles;
public:
	Port(const char* br = "none", const char* st = "none", int b = 0);
	Port(const Port& p);				// конструктор копирования
	virtual ~Port() { delete[] brand; }
	Port& operator = (const Port& p);
	Port& operator += (int b);			// добавляет b к bottles 
	Port& operator -= (int b);			// вычитает b из bottles, если это возможно 
	int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend std::ostream& operator << (std::ostream& os, const Port& p);
};

class VintagePort : public Port			// style обязфтельно = "vintage"
{
private:
	char* nickname;						// т.е. "The Nobel", "Old Velvet" и т.д.
	int year; 							// год сбор
public:
	VintagePort();
	VintagePort(const char* br, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete[] nickname; }
	VintagePort& operator = (const VintagePort& vp);
	void Show() const;
	friend std::ostream& operator << (std::ostream& os, const VintagePort& vp);
};
#endif 