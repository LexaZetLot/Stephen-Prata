#include <iostream>     // ��� ������ ������ �� ��������
#include <fstream>
#include <string>

int main(void)
{
    using namespace std;
    string filename;
    cout << "Enter name of the file: ";         // ������ ����� ������ �����
    cin >> filename;

    // �������� ������� ��������� ������ ��� ������ ����� � ���������� ��� ����� fout
    ofstream fout(filename.c_str());
    fout << "for your eyes only!\n";            // ������ � ����
    cout << "Enter your secret number: ";       // ����� �� �����
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close();                               // �������� �����

    //�������� ������� �������� ������ ��� ������ ����� � ���������� ��� ����� fin
    ifstream fin(filename.c_str());
    cout << "Here are the contens of " << filename << ":\n";
    char ch;
    while (fin.get(ch))                         //������ ������� �� �����
        cout << ch;                             //����� �������
    cout << "Done!\n";
    fin.close();

    return 0;
}