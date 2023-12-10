#define _CRT_SECURE_NO_WARNINGS
#include <cstring>   
#include <cstdlib>
#include <cctype>
#include "function.h"   
using std::cout;
using std::cin;

int String::num_string = 0;
const int String::CINLIM;

int String::HowMany()
{
    return num_string;
}

String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_string++;
}

String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_string++;
}

String::String(const String& s)
{
    num_string++;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
}

String::~String()
{
    --num_string;
    delete[] str;
}

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

String& String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char& String::operator[](int i)
{
    return str[i];
}

const char& String::operator[](int i) const
{
    return str[i];
}

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

ostream& operator<<(ostream& os, const String& st)
{
    os << st.str;
    return os;
}

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

String String::operator+(const String& s)
{
    String buf;
    delete[] buf.str;
    buf.len = len + s.len;
    buf.str = new char[buf.len + 1];
    strcat(strcpy(buf.str, str), s.str);;
    return buf;
}

String operator+(const char* str, const String& s)
{
    String buf;
    delete[] buf.str;

    buf.len = strlen(str) + s.len;
    buf.str = new char[buf.len + 1];
    strcat(strcpy(buf.str, str), s.str);;
    return buf;
}

void String::stringlow()
{
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
}

void String::stringup()
{
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
}

int String::has(const char ch)
{
    int buf = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == ch)
            buf++;
    return buf;
}