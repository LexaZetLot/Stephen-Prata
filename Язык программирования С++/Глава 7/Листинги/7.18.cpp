// fun_ptr.cpp -- ��������� �� �������
#include <iostream>
#include <string>
double betsy(int);
double pam(int);

// ������ �������� � ��������� �� ������� double, 
// �������' ��������� �������� ���� int 
void estimate(int lines, double(*pf) (int));
int main(void)
{
	using namespace std;
	int code;
	cout << "How many lines of code do you need? "; // ���� ���������� ����� ���� 
	cin >> code;
	cout << "Here's Betsy's estimate:\n";			// ����� ������ ������ 
	estimate(code, betsy);
	cout << "Here's Pam's estimate:\n";				// ����� ������ ������ 
	estimate(code, pam);
	return 0;
}
double betsy(int Ins)
{
	return 0.05 * Ins;
}
double pam(int Ins)
{
	return 0.03 * Ins + 0.0004 * Ins * Ins;
}
void estimate(int lines, double(*pf)(int))
{
	using namespace std;
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hour(s)\n";			// ����� ������ ������� 
}