// memb_pt.cpp -- ������������� ���������� �� ����� �������
#include <iostream>
using namespace std;
class Example
{
private:
	int feet;
	int inches;
public:
	Example();
	Example(int ft);
	~Example();
	void show_in() const;
	void show_ft() const;
	void use_ptr() const;
};
Example::Example()
{
	feet = 0;
	inches = 0;
}
Example::Example(int ft)
{
	feet = ft;
	inches - 12 * feet;
}
Example::~Example()
{
}
void Example::show_in() const
{
	cout << inches << " inches\n";
}
void Example::show_ft() const
{
	cout << feet << " feet\n";
}
void Example::use_ptr() const
{
	Example yard(3);
	int Example::* pt;
	pt = &Example::inches;
	cout << "Set pt to &Example::inches:\n";		// ��������� pt � &Example::inches
	cout << "this->pt: " << this->*pt << endl;
	cout << "yard.*pt: " << yard.*pt << endl;
	pt = &Example::feet;
	cout << "Set pt to &Example::feet:\n";			// ��������� pt � &Example::feet
	cout << "this->pt: " << this->*pt << endl;
	cout << "yard.*pt: " << yard.*pt << endl;
	void (Example:: * pf)() const;
	pf = &Example::show_in;
	cout << "Set pf to &Examplr::show_in:\n";		// ��������� pt � &Example::show_in
	cout << "Using (this->*pf) (): ";				// ������������� (this->*pf) ()
	(this->*pf)();
	cout << "Using (yard.*pf)(): ";					// ������������� (yard.*pf) ()
	(yard.*pf)();
}
int main(void)
{
	Example car(15);
	Example van(20);
	Example garage;
	cout << "car.use_ptr() output:\n";				// ����� �� car.use_ptr ()
	car.use_ptr();
	cout << "\nvan.use_ptr() output:\n";			// ����� �� van.use_ptr ()
	van.use_ptr();
	return 0;
}