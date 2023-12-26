// manip.cpp -- использование манипуляторов формата
#include <iostream>
int main(void)
{
    using namespace std;
    // Вывод приглашения к вводу числа
    cout << "Enter an integer: ";

    int n;
    cin >> n;
    cout << "n   n*n\n";
    cout << n << "   " << n * n << " (decimal)\n";

    // Установка шестандцатеричного режима вывода
    cout << hex;
    cout << n << "   ";
    cout << n * n << " (hexadecimal)\n";

    // Установка восьмерчного режима
    cout << oct << n << "   " << n * n << " (octal)\n";

    // Альтернативный способ вызова манипулятора
    dec(cout);
    cout << n << "   " << n * n << " (decimal)\n";
    return 0;
}