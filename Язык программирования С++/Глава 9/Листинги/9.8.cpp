// twofile2.��� -- ���������� � ���������� � ������� ����������� 
#include <iostream> 
extern int tom;			// ���������� tom ���������� � ������ ����� 
static int dick = 10;	// �������������� ������� ���������� dick 
int harry = 200;		// ����������� ������� ����������, 
// �������� � harry �� twofilel ����������� 
void remote_access(void)
{
	using namespace std;
	cout << "remote_access () reports the following addresses:\n"; // ����� ������� 
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}