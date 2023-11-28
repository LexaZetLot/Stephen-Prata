#include <iostream>
int main(void)
{
	using namespace std;
	const int cmin = 60;
	const int chou = 60;
	const int cday = 24;
	long long sec;

	cout << "Enter the number of seconds: ";
	cin >> sec;
	cout << sec << " seconds = " << sec / (cmin * chou * cday)
		<< " days, " << (sec % (cmin * chou * cday)) / (cmin * cmin) << " hours, "
		<< (sec % (cmin * cmin)) / cmin << " minutes, " << sec % cmin << " second,";

	return 0;
}