#include <iostream>
#include "function.h"

void Bravo(const Cd& disk);

int main(void)
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;
	// ���������������� ������������� �������� 
	std::cout << "Using object directly:\n";
	c1.Report(); // ������������� ������ Cd 
	c2.Report(); // ������������� ������ Classic 
	// ������������� ��������� �� ������� ���� cd * 
	std::cout << "Using type cd * pointer to objects: \n";
	pcd->Report(); // ������������� ������ Cd ��� ������� cd 
	pcd = &c2;
	pcd->Report(); // ������������� ������ Classic ��� ������� classic 
	// ����� ������� � ����������-������� �� Cd 
	std::cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);
	// ������������ ������������ 
	std::cout << "Testing assignment: ";
	Classic copy;
	copy = c2;
	c2.Report();
	copy.Report();
	return 0;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}