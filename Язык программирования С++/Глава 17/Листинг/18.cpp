// append.cpp -- добавление информации в файл
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // для exit ()
const char* file = "quests.txt";
int main(void)
{
    using namespace std;
    char ch;

    // Отображение начального содержимого
    ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        cout << "Here're the current contents of the "
            << file << " file:\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }

    // Добавление новых имен
    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n"; // не удается открыть файл
        exit(EXIT_FAILURE);
    }
    cout << "Enter guest names (Enter a blank line to quit):\n";
    string name;
    while (getline(cin, name) && name.size() > 0)
    {
        fout << name << endl;
    }
    fout.close();

    // Отображение измененного файла
    fin.clear();    // не обязательно для некоторых компиляторов
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Here're the current contents of the "
            << file << " file:\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }
    cout << "Done!\n";
    return 0;
}