#include <iostream>
#include <cstdlib>		 
#include <ctime>		
#include "function.h" 
const int MIN_PER_HR = 60;

bool newcustomer(double x);
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
int main(void)
{
	std::srand(std::time(0));
	int hours = 100;
	long cyclelimit = MIN_PER_HR * hours;

	double perhour = 0;
	double min_per_cust;
	Item temp;


	long turnaways1 = 0;
	long customers1 = 0;
	long served1 = 1;
	long sum_line1 = 0;
	int wait_time1 = 0;
	long line_wait1 = 0;

	long turnaways2 = 0;
	long customers2 = 0;
	long served2 = 0;
	long sum_line2 = 0;
	int wait_time2 = 0;
	long line_wait2 = 0;


	int i = 1;


	while ((((double)(line_wait1 + line_wait2)) / (served1 + served2)) < 0.8 || (((double)(line_wait1 + line_wait2)) / (served1 + served2)) > 1.2)
	{
		turnaways2 = turnaways1 = 0;
		customers2 = customers1 = 0;
		served2 = served1 = 1;
		sum_line2 = sum_line1 = 0;
		wait_time2 = wait_time1 = 0;
		line_wait2 = line_wait1 = 0;

		Queue line1(hours * perhour / 2);
		Queue line2(hours * perhour / 2);

		perhour = i++;
		min_per_cust = MIN_PER_HR / perhour;

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))
			{
				if (line1.queuecount() <= line2.queuecount())
					if (line1.isfull())
						turnaways1++;
					else
					{
						customers1++;
						temp.set(cycle);
						line1.enqueue(temp);
					}
				else
					if (line2.isfull())
						turnaways2++;
					else
					{
						customers2++;
						temp.set(cycle);
						line2.enqueue(temp);
					}
			}
			if (wait_time1 == 0 && !line1.isempty())
			{
				line1.dequeue(temp);
				wait_time1 = temp.ptime();
				line_wait1 += cycle - temp.when();
				served1++;
			}

			if (wait_time2 == 0 && !line2.isempty())
			{
				line2.dequeue(temp);
				wait_time2 = temp.ptime();
				line_wait2 += cycle - temp.when();
				served2++;
			}

			if (wait_time1 > 0)
				wait_time1--;

			if (wait_time2 > 0)
				wait_time2--;
		}
	}
	cout << perhour;
	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}