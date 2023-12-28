// callable.cpp -- ���������� ���� � �������
#include "somedefs.h" 
double dub(double x) { return 2.0 * x; }
double square(double x) { return x * x; }
int main(void)
{
	using std::cout;
	using std::endl;
	double y = 1.21;
	cout << "Function pointer dub:\n";				// ��������� �� ������� dub 
	cout << " " << use_f(y, dub) << endl;
	cout << "Function pointer square:\n";			// ��������� �� ������� square 
	cout << " " << use_f(y, square) << endl;
	cout << "Function object Fp:\n";				// �������������� ������ Fp 
	cout << " " << use_f(y, Fp(5.0)) << endl;
	cout << "Function object Fq:\n";				// �������������� ������ Fq 
	cout << " " << use_f(y, Fq(5.0)) << endl;
	cout << "Lambda expression l:\n";				// ������-��������� 1 
	cout << " " << use_f(y, [](double u) {return u * u; }) << endl;
	cout << "Lambda expression 2:\n";				// ������-��������� 2 
	cout << " " << use_f(y, [](double u) {return u + u / 2.0; }) << endl;
	return 0;
}