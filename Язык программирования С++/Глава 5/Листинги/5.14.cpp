// waiting.��� -- ������������� clock() � ����� ��������� �������� 
#include <iostream>
#include <ctime> // ��������� ������� clock() � ��� clock_t 
int main(void)
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";		// ���� ������� �������� � �������� 
	float sees;
	cin >> sees;
	clock_t delay = sees * CLOCKS_PER_SEC;				// �������������� � ���� 
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)						// �������� ��������� ������� 
		; // �������� �������� �� ����� � ������� 
	cout << "done \a\n";
	return 0;
}