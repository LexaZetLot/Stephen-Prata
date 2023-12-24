// setf.cpp -- ������������� setf() ��� ���������� ���������������
#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;

    cout << "Today's weather temperature: ";
    cout.setf(ios_base::showpos);                   //�������� ���� ����
    cout << temperature << endl;

    cout << "For our programming friends, that's\n";
    cout << std::hex << temperature << endl;        // ������������� ������������������ 
    // �������������
    cout.setf(ios_base::uppercase);                 // ���������� ��������� �������� � 
    // ����������������� �������
    cout.setf(ios_base::showbase);                  // ������������� �������� 0X ���
    // ����������������� ��������
    cout << "or\n";
    cout << temperature << endl;
    cout << "How " << true << "! oops -- How ";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    return 0;
}