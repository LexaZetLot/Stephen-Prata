#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char* str;
    int len;
    static int num_string;
    static const int CINLIM = 80;
public:
    String(const char* s);
    String();
    String(const String& s);
    ~String();
    int length() const { return len; }
    int has(const char ch);

    void stringlow();
    void stringup();
    String& operator=(const String& s);
    String& operator=(const char* s);
    String operator+(const String& s);
    char& operator[](int i);
    const char& operator[](int i) const;

    friend String operator+(const char* str, const String& s);
    friend bool operator<(const String& st1, const String& st2);
    friend bool operator>(const String& st1, const String& st2);
    friend bool operator==(const String& st1, const String& st2);
    friend ostream& operator<<(ostream& os, const String& st);
    friend istream& operator>>(istream& is, String& st);

    static int HowMany();
};
#endifs