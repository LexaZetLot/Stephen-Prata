#include <iostream>     // для многих систем не тебуется
#include <fstream>
#include <string>

int main(void)
{
    using namespace std;
    string filename;
    cout << "Enter name of the file: ";         // запрос имени нового файла
    cin >> filename;

    // Создание объекта выходного потока для нового файла и назанчение ему имени fout
    ofstream fout(filename.c_str());
    fout << "for your eyes only!\n";            // запись в файл
    cout << "Enter your secret number: ";       // вывод на экран
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close();                               // закрытие файла

    //создание объекта входного потока для нового файла и назначение ему имени fin
    ifstream fin(filename.c_str());
    cout << "Here are the contens of " << filename << ":\n";
    char ch;
    while (fin.get(ch))                         //чтение символа из файла
        cout << ch;                             //вывод символа
    cout << "Done!\n";
    fin.close();

    return 0;
}