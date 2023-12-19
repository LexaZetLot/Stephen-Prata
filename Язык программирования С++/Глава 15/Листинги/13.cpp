// newexcp.cpp -- исключение bad_alloc
#include <iostream>
#include <new>
#include <cstdlib>  // for exit(), EXIT_FAILURE
using namespace std;
struct Big
{
	double stuff[20000];
};
int main(void)
{
	Big* pb;
	try {
		cout << "Trying to get a big block of memory:\n";
		pb = new Big[10000];						// 1,600,000,000 bytes
		cout << "Got past the new request:\n";		// вывод результатов запроса new
	}
	catch (bad_alloc& ba)
	{
		cout << "Caught the exception!\n";			// произошло исключение
		cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Memory successfully allocated\n";		// память успешно выделена
	pb[0].stuff[0] = 4;
	cout << pb[0].stuff[0] << endl;
	delete[] pb;
	return 0;
}