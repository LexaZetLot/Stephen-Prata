#include <iostream>
#include <cstdlib>		
#include <ctime>		
#include <fstream>
#include "function.h"

int main(void)
{
	using namespace std;
	using VECTOR::Vector;
	std::fstream fp;
	fp.open("file.txt", std::ios::app);
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit) : ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		fp << "Target Distance: " << target << ", Step Size: " << dstep << std::endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			fp << steps << "--";
			fp << result << endl;
			cout << steps << "--";
			cout << result << endl;
		}
		fp << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		fp << result << endl;
		cout << result << endl;
		result.polar_mode();
		fp << " or\n" << result << endl;
		cout << " or\n" << result << endl;
		fp << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	fp.close();
	return 0;
}