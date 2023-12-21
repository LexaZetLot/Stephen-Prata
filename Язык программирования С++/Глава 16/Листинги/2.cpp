// strfile.cpp -- чтение строк из файла
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
int main(void)
{
    using namespace std;
    ifstream fin;
    fin.open("text.txt");
    if (fin.is_open() == false)
    {
        cerr << "Can't open file. Bye!\n";          // не удается открыть файл
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin)                                     // до тех пор, пока нет ошибок ввода
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done!\n";
    fin.close();
    return 0;
}