// twofile2.срр -- переменные с внутренним и внешним связыванием 
#include <iostream> 
extern int tom;			// переменная tom определена в другом месте 
static int dick = 10;	// переопределяет внешнюю переменную dick 
int harry = 200;		// определение внешней переменной, 
// конфликт с harry из twofilel отсутствует 
void remote_access(void)
{
	using namespace std;
	cout << "remote_access () reports the following addresses:\n"; // вывод адресов 
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}