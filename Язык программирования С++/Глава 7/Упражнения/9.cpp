#include <iostream>
#include <cstring>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);
int main(void)
{
	cout << "Enter class size: ";
	int class_size = 0;
	cin >> class_size;
	while (cin.get() != '\n')
	{
		continue;
	}
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);

	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}
int getinfo(student pa[], int n)
{
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		cin.getline(pa[i].fullname, SLEN);
		if (strlen(pa[i].fullname) != 0)
		{
			cin.getline(pa[i].hobby, SLEN);
			cin >> pa[i].ooplevel;
			num++;

		}
		else
			break;
		cin.get();
	}
	return num;
}
void display1(student st)
{
	cout << st.fullname << endl << st.hobby << endl << st.ooplevel << endl;
}
void display2(const student* ps)
{
	cout << ps->fullname << endl << ps->hobby << endl << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << pa[i].fullname << endl << pa[i].hobby << endl << pa[i].ooplevel << endl;
}