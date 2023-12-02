//funtemp.cpp -- использование шаблона функции 
#include <iostream>
// Прототип шаблона функции 
template <typename T>		// или class Т 
void Swap(T& a, T& b);
int main(void)
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << "\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);				// генерирует void Swap(int &, int &) 
	cout << "Now i, j = " << i << ", " << j << " .\n";
	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "Using compiler-generated double swapper:\n";
	Swap(x, y);				// генерирует void Swap(double &, double &) 
	cout << "Now x, y = " << x << ", " << y << ".\n";

	std::cin.get();
	std::cin.get();
	return 0;
}
// Определение шаблона функции 
template <typename T>		// или class T 
void Swap(T& a, T& b)
{
	T temp;					// temp - переменная типа Т 
	temp = a;
	a = b;
	b = temp;
}