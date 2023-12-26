// iomanip.cpp -- использование манипул€торов из iomanip
// некоторые манипул€торы требуют €вной компоновки с библиотекой математических функций
#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
    using namespace std;
    // »спользование новых стандартных манипул€торов
    cout << fixed << right;

    // »спользование манипул€торов iomanip дл€ извлечени€
    // квадратного корн€ и корн€ четвертой степени
    cout << setw(6) << "N" << setw(14) << "square root"
        << setw(15) << "forth root\n";

    double root;        //извлечение конр€
    for (int n = 10; n <= 100; n += 10)
    {
        root = sqrt(double(n));
        cout << setw(6) << setfill('.') << n << setfill(' ')
            << setw(12) << setprecision(3) << root << setw(14)
            << setprecision(4) << sqrt(root)
            << endl;
    }
    return 0;
}