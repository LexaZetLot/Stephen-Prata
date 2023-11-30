// outfile.cpp -- запись в файл 
#include <iostream>
#include <fstream> // для файлового ввода-вывода 
int main(void)
{
	using namespace std;
	char automobile[50];
	int year;
	double a_price;
	double d_price;
	ofstream outFile;									// создание объекта для вывода 
	outFile.open("carinfo.txt");						// ассоциирование его с файлом 
	cout << "Enter the make and model of automobile: "; // ввод производителя и модели 
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";					// ввод года выпуска 
	cin >> year;
	cout << "Enter the original asking price: ";		// ввод начальной цены 
	cin >> a_price;
	d_price = 0.913 * a_price;

	// Отображение информации на экране с помощью cout 
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;   // производитель и модель 
	cout << "Year: " << year << endl;					// год выпуска
	cout << "Was asking $" << a_price << endl;			// начальная цена 
	cout << "Now asking $" << d_price << endl;			// конечная цена 

	// Вывод той же информации с использованием outFile вместо cout 
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl; // производитель и модель 
	outFile << "Year: " << year << endl;				 // год выпуска 
	outFile << "Was asking $" << a_price << endl;		 // начальная цена 
	outFile << "Now asking $" << d_price << endl;		 // конечная цена 
	outFile.close();							   		 // завершить работу с файлом      
	return 0;
}