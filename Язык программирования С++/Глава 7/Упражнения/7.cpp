#include <iostream>
const int Max = 5;
double* fill_array(double* ar, int limit);
void show_array(const double* ar, double* pt);
void revalue(double r, double* ar, double* pt);
int main(void)
{
	using namespace std;
	double properties[Max];
	double* size = fill_array(properties, Max);
	show_array(properties, size);
	if (size != NULL)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	return 0;
}
double* fill_array(double* ar, int limit)
{
	using namespace std;
	double temp;
	double* pt = ar;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return pt + i;
}
void show_array(const double* ar, double* pt)
{
	using namespace std;
	for (int i = 0; (ar + i) != pt; i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double* ar, double* pt)
{
	for (int i = 0; (ar + i) != pt; i++)
		ar[i] *= r;
}