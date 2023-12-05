//usestok1.��� -- ������������� ������ Stock 
// 
//������������� ������ � stock10.cpp 
#include <iostream>
#include "stock10.h"

int main(void)
{
	{
		using std::cout;
		// ������������� ������������� ��� �������� ����� �������� 
		cout << "Using constructors to create new objects\n";
		Stock stockl("NanoSmart", 12, 20.0);				// ������ ��������� 
		stockl.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);		// ������ ��������� 
		stock2.show();
		// ������������ stockl ������� stock2 
		cout << "Assigning stockl to stock2:\n";
		stock2 = stockl;
		// ����� stockl � stock2 
		cout << "Listing stockl and stock2:\n";
		stockl.show();
		stock2.show();
		// ������������� ������������ ��� ������ ������� 
		cout << "Using a constructor to reset an object\n";
		stockl = Stock("Nifty Foods", 10, 50.0); // ��������� ������ 
		cout << "Revised stockl:\n";
		stockl.show();
		cout << "Done\n";
	}
	return 0;
}