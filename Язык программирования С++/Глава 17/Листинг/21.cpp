// strout.cpp -- внутреннее форматирвоание (вывод)
#include <iostream>	
#include <sstream>
#include <string>
int main(void)
{
	using namespace std;
	ostringstream outstr;			// управл€ет строковым потоком 
	string hdisk;
	cout << "What's the name of your hard disk? ";
	getline(cin, hdisk);
	int cap;
	cout << "What's its capacity in GB? ";
	cin >> cap;

	// «апись форматированной информации в строковый поток 
	outstr << "The hard disk " << hdisk << " has a capacity of "
		<< cap << " gigabytes.\n";
	string result = outstr.str();	// сохранение результата 
	cout << result;					// отображение содержимого 
	return 0;
}