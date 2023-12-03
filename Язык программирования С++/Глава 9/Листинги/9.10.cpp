// newplace.cpp -- использование операции new с размещением 
#include <iostream>
#include <new>		// для операции new с размещением 
const int BUF = 512;
const int N = 5;
char buffer[BUF];	// блок памяти 
int main(void)
{
	using namespace std;
	double* pd1, * pd2;
	int i;
	// Вызов обычной и операции new с размещением 
	cout << "Calling new and placement new:\n";
	pd1 = new double[N];							// использование кучи 
	pd2 = new (buffer) double[N];					// использование массива buffer 
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0 * i;
	cout << "Memory addresses: \n" << "heap: " << pd1
		<< " static: " << (void*)buffer << endl;	// вывод адресов памяти 
	cout << "Memory contents:\n";					// вывод содержимого памяти 
	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	// Вызов обычной и операции new с размещением во второй раз 
	cout << "\nCalling new and placement new a second time:\n";
	double* pd3, * pd4;
	pd3 = new double[N];							// нахождение нового адреса 
	pd4 = new (buffer) double[N];					// перезаписывание старых данных 
	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0 * i;
	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd3[i] << " at " << &pd3[i] << "; ";
		cout << pd4[i] << " at " << &pd4[i] << endl;
	}
	// Вызов обычной и операции new с размещением в третий раз 
	cout << "\nCalling new and placement new a third time:\n";
	delete[] pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 60.0 * i;
	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	delete[] pd1;
	delete[] pd3;
	return 0;
}