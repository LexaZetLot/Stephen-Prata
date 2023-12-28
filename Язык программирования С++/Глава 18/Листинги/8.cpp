// wrapped.cpp -- ������������� �������� function � �������� ���������
#include "somedefs.h"
#include <iostream>
#include <functional>
double dub(double x) { return 2.0 * x; }
double square(double x) { return x * x; }
int main(void)
{
	using std::cout;
	using std::endl;
	using std::function;
	double y = 1.21;
	function<double(double)> efl = dub;
	function<double(double)> ef2 = square;
	function<double(double)> ef3 = Fq(10.0);
	function<double(double)> ef4 = Fp(10.0);
	function<double(double)> ef5 = [](double u) {return u * u; };
	function<double(double)> ef6 = [](double u) {return u + u / 2.0; };
	cout << "Function pointer dub:\n";		// ��������� �� ������� dub 
	cout << " " << use_f(y, efl) << endl;
	cout << "Function pointer square:\n";	// ��������� �� ������� square 
	cout << " " << use_f(y, ef2) << endl;
	cout << "Function object Fp:\n";		// �������������� ������ Fp 
	cout << " " << use_f(y, ef3) << endl;
	cout << "Function object Fq:\n";		// �������������� ������ Fq 
	cout << " " << use_f(y, ef4) << endl;
	cout << "Lambda expression l:\n";		// ������-��������� 1 
	cout << " " << use_f(y, ef5) << endl;
	cout << "Lambda expression 2:\n";		// ������-��������� 2 
	cout << " " << use_f(y, ef6) << endl;
	return 0;
}