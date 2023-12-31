#define _CRT_SECURE_NO_WARNINGS
//strngbad.cpp -- ������ ������ StrngBad
#include <cstring>  // � ��������� ������� - string.h
#include "strngbad.h"
using std::cout;

//������������� ������������ ����� �����
int StringBad::num_strings = 0;

//������ ������

//�������� StrngBad �� � ������
StringBad::StringBad(const char* s)
{
    len = std::strlen(s);           //��������� �������
    str = new char[len + 1];        //��������� ������
    std::strcpy(str, s);             //������������� ���������
    num_strings++;                  //������� ��������
    cout << num_strings << ": \"" << str << "\" objects created.\n";
}

StringBad::StringBad()
{
    len = 4;
    str = new char[len];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default objects created.\n";
}

StringBad::~StringBad()             //����������� ����������
{
    cout << "\"" << str << "\" object deleted, ";
    --num_strings;                  //�������� ������������
    cout << num_strings << " left\n";
    delete[] str;                  //�������� ������������
}

std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
    os << st.str;
    return os;
}