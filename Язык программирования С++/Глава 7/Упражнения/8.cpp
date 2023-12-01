#include <iostream> 
const int Seasons = 4;
const char* seasons[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
struct array
{
	double arr[Seasons];
};
void fill1(const char** seasons, double* arr);
void show1(const char** seasons, double* arr);
void fill2(const char** seasons, struct array* arr);
void show2(const char** seasons, struct array* arr);
int main(void)
{
	struct array arr;
	fill2(seasons, &arr);
	show2(seasons, &arr);
	return 0;
}
void fill1(const char** seasons, double* arr)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << seasons[i] << " expenses: ";
		cin >> arr[i];
	}
}
void show1(const char** seasons, double* arr)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << seasons[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
void fill2(const char** seasons, struct array* arr)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << seasons[i] << " expenses: ";
		cin >> arr->arr[i];
	}
}
void show2(const char** seasons, struct array* arr)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << seasons[i] << ": $" << arr->arr[i] << endl;
		total += arr->arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}