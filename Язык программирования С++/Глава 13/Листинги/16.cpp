// usedma.cpp -- ������������, ������ � ������������ ��������� ������
// ������������� ������ � dma.h 
#include <iostream>
#include "dma.h" 
int main(void)
{
	using std::cout;
	using std::endl;
	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << "Displaying baseDMA object:\n";			// ����������� ������� baseDMA 
	cout << shirt << endl;
	cout << "Displaying lacksDMA object:\n";		// ����������� ������� lacksDMA 
	cout << balloon << endl;
	cout << "Displaying hasDMA object:\n";			// ����������� ������� hasDMA 
	cout << map << endl;
	lacksDMA balloon2(balloon);
	cout << "Result of lacksDMA copy:\n";			// ��������� ����������� lacksDMA 
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "Result of hasDMA assignment:\n";		// ��������� ������������ hasDMA 
	cout << map2 << endl;
	return 0;
}