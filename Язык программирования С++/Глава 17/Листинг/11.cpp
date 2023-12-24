// check_it.cpp -- проверка допустимости ввода
#include <iostream>

int main(void)
{
    using namespace std;
    cout << "Enter numbers: ";  // запрос на ввод чисел

    int sum = 0;
    int input;
    while (cin >> input)
    {
        sum += input;
    }
    cout << "Last value entered = " << input << endl;   // вывод последнего введенного значения
    cout << "Sum = " << sum << endl;                    // вывод суммы введенных чисел
    return 0;
}