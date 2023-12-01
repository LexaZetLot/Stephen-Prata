// cubes.срр -- обычные и ссылочные аргументы 
#include <iostream>
double cube(double a);
double refcube(double& ra);
int main(void)
{
	using namespace std;
	double x = 3.0;
	cout << cube(x);
	cout << " = cube of " << x << endl;			// вывод значения в кубе 
	cout << refcube(x);
	cout << " = cube of " << x << endl;			// вывод значения в кубе 
	return 0;
}
double cube(double a)
{
	a *= a * a;
	return a;
}
double refcube(double& ra)
{
	ra *= ra * ra;
	return ra;
}