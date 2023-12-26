// cinexcp.cpp -- cin, генерирующий исключения
#include <iostream>
#include <exception>
int main(void)
{
    using namespace std;
    // Установленный бит failbit вызовет генерацию исключения
    cin.exceptions(ios_base::failbit);
    cout << "Enter numbers: ";  // запрос на ввод чисел
    int sum = 0;
    int input;
    try {
        while (cin >> input)
        {
            sum += input;
        }
    }
    catch (ios_base::failure& bf)
    {
        cout << bf.what() << endl;
        cout << "O! the horror!\n";
    }
    cout << "Last value entered = " << input << endl;   // вывод последнего введенного числа
    cout << "Sum = " << sum << endl;                    // вывод суммы введенных чисел
    return 0;
}