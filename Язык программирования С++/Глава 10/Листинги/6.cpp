//usestok1.срр -- использование класса Stock 
// 
//Компилировать вместе с stock10.cpp 
#include <iostream>
#include "stock10.h"

int main(void)
{
	{
		using std::cout;
		// Использование конструкторов для создания новых объектов 
		cout << "Using constructors to create new objects\n";
		Stock stockl("NanoSmart", 12, 20.0);				// первый синтаксис 
		stockl.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);		// второй синтаксис 
		stock2.show();
		// Присваивание stockl объекту stock2 
		cout << "Assigning stockl to stock2:\n";
		stock2 = stockl;
		// Вывод stockl и stock2 
		cout << "Listing stockl and stock2:\n";
		stockl.show();
		stock2.show();
		// Использование конструктора для сброса объекта 
		cout << "Using a constructor to reset an object\n";
		stockl = Stock("Nifty Foods", 10, 50.0); // временный объект 
		cout << "Revised stockl:\n";
		stockl.show();
		cout << "Done\n";
	}
	return 0;
}