// use_new.cpp -- ������������� �������� new 
#include <iostream>
int main(void)
{
	using namespace std;
	int nights = 1001;
	int* pt = new int;			// ��������� ������������ ��� int 
	*pt = 1001;					// ���������� � ��� �������� 

	cout << "nights value = ";								// �������� nights 
	cout << nights << " : location " << &nights << endl;	// ������������ nights 
	cout << "int ";											// �������� � ������������ int 
	cout << "value = " << *pt << " : location = " << pt << endl;
	double* pd = new double;	// ��������� ������������ ��� double 
	*pd = 10000001.0;			// ���������� � ��� �������� double 
	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	// �������� � ������������ double 
	cout << "location of pointer pd: " << &pd << endl;
	// ������������ ��������� pd 
	cout << "size of pt = " << sizeof(pt);				// ������ pt 
	cout << " : size of *pt = " << sizeof(*pt) << endl; // ������ *pt 
	cout << "size of pd = " << sizeof pd;			    // ������ pd 
	cout << ": size of *pd = " << sizeof(*pd) << endl;  // ������ *pd 
	return 0;
}