// width.cpp -- использование метода width
#include <iostream>
int main(void)
{
    using std::cout;
    int w = cout.width(30);
    cout << "Default field width = " << w << ":\n"; // ширина поля по умолчанию
    cout.width(5);
    cout << "N" << ':';
    cout.width(8);
    cout << "N * N" << ":\n";
    for (long i = 1; i <= 100; i *= 10)
    {
        cout.width(5);
        cout << i << ':';
        cout.width(8);
        cout << i * i << ":\n";
    }
    return 0;
}