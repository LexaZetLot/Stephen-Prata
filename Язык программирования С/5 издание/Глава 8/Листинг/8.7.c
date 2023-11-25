//* checking .c -- проверка допустимости ввода */
#include <stdio.h>
#include <stdЬool.h>

// проверка, является ли вводимое значение целым числом 

int get_int (void);

// проверка, являются ли границы диапазона допустимы

bool bad_limits (int begin, int end, int low, int high);

// вычисление суммы квадратов целых чисел ОТ а ДО Ь 

double sum_squares (int а, int b);

int main (void) 
{
    const int MIN = -1000;                                                      // нижняя граница диапазона 
    const int МАХ = +1000;                                                      // верхняя граница диапазона
    int start;                                                                  // начало диапазона
    int stop;                                                                   // конец диапазона 
    double answer;
    
    printf ("Этa программа вычисляет сумму квадратов "
            "целых чисел в заданном диапазоне.\nНижняя граница не должна
            "быть меньше -1000,\na верхняя - "
            "больше +1000.\nВведите значения границ диапазона (введите 0 для "
            "о беих границ для завершения программы):\nнижняя граница: "); 
    
    start = get_int ();
    printf ("вepxняя граница: ");
    stop = get_int ();
    
    while (start != 0 || stop != 0)
    {
        if (bad_limits ( start, stop, MIN, МАХ))
            printf ("Пожалуйста, повторите попытку.\n");
        else 
        {
            answer = sum_squares (start, stop);
            printf ("Cyммa квадратов целых чисел") ;
            printf (" oт %d до %d равна %g\n", start, stop, answer);
        }
        printf (" Введите знач ения границ диапазона (вв едите О для "
                "обеих границ для завершения прогр аммы) : \n") ;
        printf ( "нижняя граница: ");
        start = get_int ();
        printf ("вepxняя граница: ");
        stop = get_int (); 
        
    }
    printf ("Пpoгpaммa завершена.\n ");
    return 0;
}


int get_int (void)
{
    while ( scanf ("%d", &input ) != 1)
    {
        putchar (ch);                                                           // удаление неправильных вхо дных данных
        printf ("не является целочисленным.\nПожалуйста, введите");
        printf (" цeлoe число, такое как 25, -178 или 3: " );
    }
    return input;
}


double sum_squares (int а, int b)
{
    douЫe total = 0;
    int i;
    for (i = а; i <= b; i++)
    total += i * i;
    return total;
}


bool bad_limits (int begin, int end, int low, int high)
{
    bool not_good = false; 
    if (begin > end) 
    {
        printf ("%d не меньше %d.\n", begin, end);
        not_good true;
    }
    if (begin < low || end < low) 
    {
        printf ("Значения должны быть равными %d или больше.\n", low);
        not_good = true; 
    }
    if (begin > high || end > high)
    {
        printf ("Значения должны быть равными %d или меньше.\n", high );
        not_good = true ;
    }
    return not_good;
}