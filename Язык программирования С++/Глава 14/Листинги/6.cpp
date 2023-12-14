// use_stui.cpp -- использование класса с закрытым наследованием 
// Компилировать вместе с studenti.cpp 
#include <iostream>
#include "studenti.h" 
using std::cin;
using std::cout;
using std::endl;
void set(Student& sa, int n);
const int pupils = 3;
const int quizzes = 5;
int main(void)
{
	Student ada[pupils] =
	{ Student(quizzes), Student(quizzes), Student(quizzes) };
	int i;
	for (i = 0; i < pupils; i++)
		set(ada[i], quizzes);
	cout << "\nStudent List:\n";							// вывод списка студентов 
	for (i = 0; i < pupils; ++i)
		cout << ada[i].Name() << endl;
	cout << "\nResults:";									// вывод оценок 
	for (i = 0; i < pupils; i++)
	{
		cout << endl << ada[i];
		cout << "average: " << ada[i].Average() << endl;	// средняя оценка 
	}
	cout << "Done.\n";
	return 0;
}
void set(Student& sa, int n)
{
	cout << "Please enter the student's name: ";			// ввод имени студента 
	getline(cin, sa);
	cout << "Please enter " << n << " quiz scores :\n";		// ввод оценок для студента 
	for (int i = 0; i < n; i++)
		cin >> sa[i];
	while (cin.get() != '\n')
		continue;
}