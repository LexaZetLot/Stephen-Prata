// structur.��� -- ������� ���������
#include <iostream>
struct inflatable			// ���������� ��������� 
{
	char name[20];
	float volume;
	double price;
};
int main(void)
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria", // �������� name 
		1.88,			   // �������� volume 
		29.99			   // �������� value 
	}; // guest � ����������� ���������� ���� inflatable 
	// ������������� ���������� ���������� 
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	}; // pal � ������ ���������� ���� inflatable 
	// ����������: ���������� ���������� ������� �������������
	// static = inflatable quest =

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";	// pal.name - ���� name ���������� pal 
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	return 0;
}