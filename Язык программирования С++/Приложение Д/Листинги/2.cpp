// align.cpp -- проверка выравнивания
#include <iostream>
using namespace std;
struct things1
{
	char ch;
	int a;
	double x;
};
struct things2
{
	int a;
	double x;
	char ch;
};
int main(void)
{
	things1 th1;
	things2 th2;
	cout << "char alignment: " << alignof (char) << endl;		// выравнивание char
	cout << "int alignment: " << alignof (int) << endl;			// выравнивание int
	cout << "double alignment: " << alignof (double) << endl;	// выравнивание double
	cout << "things1 alignment: " << alignof (things1) << endl;	// выравнивание things1
	cout << "things2 alignment: " << alignof (things2) << endl;	// выравнивание things2
	cout << "things1 size: " << sizeof(things1) << endl;		// размер things1
	cout << "things2 size: " << sizeof(things2) << endl;		// размер things2
	return 0;
}