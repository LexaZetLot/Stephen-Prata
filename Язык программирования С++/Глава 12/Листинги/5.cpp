#define _CRT_SECURE_NO_WARNINGS
// string1.cpp -- методы класса String
#include <cstring>      // в некоторых случаях — string.h 
#include "string1.h"    // включение <iostream>
using std::cout;
using std::cin;

// Инициализация статического члена класса
int String::num_string = 0;
const int String::CINLIM;

// Статический метод
int String::HowMany()
{
    return num_string;
}

// Методы класса
String::String(const char* s)                           // создание String из С-строки
{
    len = std::strlen(s);                               // установка размера
    str = new char[len + 1];                            // выделение памяти
    std::strcpy(str, s);                                // инициализация указателя
    num_string++;                                       // корректировка счетчика объектов
}

String::String()                                        // конструктор по умолчанию
{
    len = 0;
    str = new char[1];
    str[0] = '\0';                                      // строка по умолчанию
    num_string++;
}

String::String(const String& s)
{
    num_string++;                                       // обработка обновления статического члена
    len = s.len;                                        // длина та же
    str = new char[len + 1];                            // выделение памяти
    std::strcpy(str, s.str);                            // копирование строки в новое место
}

String::~String()                                       // необходимый деструктор
{
    --num_string;                                       // требуется
    delete[] str;                                       // требуется
}

// Методы перегруженных операций
// Присваивание объекта String объекту String
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

//Присваивание С-строки объекту String
String& String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// Доступ для чтения и записи отдельных символов в неконстантном объекте String
char& String::operator[](int i)
{
    return str[i];
}

// Доступ для чтения отдельных символов в константном объекте String
const char& String::operator[](int i) const
{
    return str[i];
}

// Дружественные функции перегруженных операций
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

// Простой вывод String
ostream& operator<<(ostream& os, const String& st)
{
    os << st.str;
    return os;
}

// Простой ввод String
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