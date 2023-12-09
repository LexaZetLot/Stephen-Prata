#define _CRT_SECURE_NO_WARNINGS
// string1.cpp -- ������ ������ String
#include <cstring>      // � ��������� ������� � string.h 
#include "string1.h"    // ��������� <iostream>
using std::cout;
using std::cin;

// ������������� ������������ ����� ������
int String::num_string = 0;
const int String::CINLIM;

// ����������� �����
int String::HowMany()
{
    return num_string;
}

// ������ ������
String::String(const char* s)                           // �������� String �� �-������
{
    len = std::strlen(s);                               // ��������� �������
    str = new char[len + 1];                            // ��������� ������
    std::strcpy(str, s);                                // ������������� ���������
    num_string++;                                       // ������������� �������� ��������
}

String::String()                                        // ����������� �� ���������
{
    len = 0;
    str = new char[1];
    str[0] = '\0';                                      // ������ �� ���������
    num_string++;
}

String::String(const String& s)
{
    num_string++;                                       // ��������� ���������� ������������ �����
    len = s.len;                                        // ����� �� ��
    str = new char[len + 1];                            // ��������� ������
    std::strcpy(str, s.str);                            // ����������� ������ � ����� �����
}

String::~String()                                       // ����������� ����������
{
    --num_string;                                       // ���������
    delete[] str;                                       // ���������
}

// ������ ������������� ��������
// ������������ ������� String ������� String
String& String::operator=(const String& s)
{
    if (this == &s)
    {
        return *this;
    }
    else {
        delete[] str;
        len = s.len;
        str = new char[len + 1];
        std::strcpy(str, s.str);
        return *this;
    }
}

//������������ �-������ ������� String
String& String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// ������ ��� ������ � ������ ��������� �������� � ������������� ������� String
char& String::operator[](int i)
{
    return str[i];
}

// ������ ��� ������ ��������� �������� � ����������� ������� String
const char& String::operator[](int i) const
{
    return str[i];
}

// ������������� ������� ������������� ��������
bool operator<(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
    return st2.str < st1.str;
}

bool operator==(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

// ������� ����� String
ostream& operator<<(ostream& os, const String& st)
{
    os << st.str;
    return os;
}

// ������� ���� String
istream& operator>>(istream& is, String& st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
    {
        st = temp;
    }
    while (is && is.get() != '\n')
    {
        continue;
    }
    return is;
}