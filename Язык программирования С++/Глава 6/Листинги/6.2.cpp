// ifelse.��� -- ������������� ��������� if else 
#include <iostream>
int main(void)
{
	char ch;
	std::cout << "Type, and I shall repeat.\n"; // ������ �� ���� ������ 
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;   // ���������� � ������ ������� ����� ������ 
		else
			std::cout << ++ch; // ���������� � ��������� ������ 
		std::cin.get(ch);
	}
	// ���������� ch + 1 ������ ++ch, ����� ������� ���������� ������ 
	std::cout << "\nPlease excuse the slight confusion.\n";

	// std::cin.get();
	// std::cin.get();
	return 0;
}