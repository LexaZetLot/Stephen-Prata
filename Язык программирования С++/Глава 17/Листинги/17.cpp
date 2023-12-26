// count.cpp -- подсчет символов в списке файлов
#include <iostream>
#include <fstream>
#include <cstdlib>                      //для exit()
int main(int argc, char* argv[])
{
    using namespace std;
    if (argc == 1)                      //выход при отсутсвии аргументов
    {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin;                       // открытие потока
    long count;
    long total = 0;
    char ch;
    for (int file = 1; file < argc; file++)
    {
        fin.open(argv[file]);           //подключение потока к argv[file]
        if (!fin.is_open())
        {
            cerr << "Could not open " << argv[file] << endl;
            fin.clear();
            continue;
        }
        count = 0;
        while (fin.get(ch))
            count++;
        cout << count << " Characters in " << argv[file] << endl;
        // количество символов в файле
        total += count;
        fin.clear();                    // требуется для некоторых реализаций
        fin.close();                    // отключение от файла
    }
    cout << total << " Characters in all files.\n"; // количество символов во всех файлах
    return 0;
}