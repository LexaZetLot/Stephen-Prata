// protos.��� -- ������������� ���������� � ������ ������� 
#include <iostream>
void cheers(int n);			// ��������: ��� �������� �������� 
double cube(double x);		// ��������: ���������� double 
int main(void)
{
	using namespace std;
	cheers(5);										// ����� ������� 
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);						// ����� ������� 
	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " cubic feet.\n";
	cheers(cube(2));								// ������ ��������� � �������� 

	return 0;
}
void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}
double cube(double x)
{
	return x * x * x;
}