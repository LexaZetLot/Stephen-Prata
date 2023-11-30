// calling.срр -- определение, прототипирование и вызов функции 
#include <iostream>
void simple(void);			// прототип функции 
int main(void)
{
	using namespace std;
	cout << "main () will call the simple () function: \n";
	simple();				// вызов функции 
	cout << "main() is finished with the simple () function.\n";
	return 0;
}

void simple(void)
{
	using namespace std;
	cout << "I'm but a simple function. \n";
}