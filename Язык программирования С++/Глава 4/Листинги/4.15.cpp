// pointer.ерр -- наша первая переменная-указатель 
#include <iostream>
int main(void)
{
	using namespace std;
	int updates = 6;					// объявление переменной 
	int* p_updates;						// объявление указателя на int 

	p_updates = &updates;				// присвоить адрес int указателю 

	// Выразить значения двумя способами 
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	// Выразить адреса двумя способами 
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	// Изменить значение через указатель 
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	return 0;
}