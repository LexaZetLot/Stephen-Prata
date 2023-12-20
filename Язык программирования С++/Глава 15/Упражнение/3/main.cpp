#include <iostream>
#include <cmath> 
#include <exception>
#include "function.h" 
double hmean(double a, double b);
double gmean(double a, double b);
int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;
	double x, y, z;
	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		}
		catch (std::logic_error& le)
		{
			if (typeid(bad_hmean) == typeid(le))
			{
				bad_hmean& buf = dynamic_cast <bad_hmean&> (le);
				buf.show();
				cout << buf.what() << endl;
				continue;
			}
			else
			{
				bad_gmean& buf = dynamic_cast <bad_gmean&> (le);
				buf.show();
				cout << buf.what() << endl;
				continue;
			}
		}
	}
	cout << "Bye!\n";
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean("error", a, b);
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean("error1", a, b);
	return std::sqrt(a * b);
}