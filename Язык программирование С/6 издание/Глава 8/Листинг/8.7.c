//checking.c — проверка допустимости ввода

#include <stdio.h>
#include <stdbool.h>
//проверка, является ли вводимое значение целым числом 

long get_long (void);
// проверка, являются ли границы диапазона допустимы
bool bad_limits (long begin, long end, long low, long high);
//вычисление суммы квадратов целых чисел от а до Ь
double sum_squares (long а, long b);

int main (void) 
{
    const long MIN = -10000000;                                                 //нижний предел диапазона 
    const long МАХ = +10000000;                                                 //верхний предел диапазона
    long start;                                                                 //начало диапазона
    long stop;                                                                  //конец диапазона 
    double answer;
    
    printf ("Этa программа вычисляет сумму квадратов "
            "целых чисел в заданном диапазоне.\nНижняя граница не должна"
            "быть меньше -10000000,\na верхняя не должна быть "
            "больше +10000000.\ndведите значения "
            "пределов (для завершения введите 0 для обоих пределов):\n"
            "нижний предел:"); 
    
    start = get_long ();
    printf ("вepxний предел: ");
    stop = get_long ();
    
    while (start != 0 || stop != 0)
    {
        if (bad_limits (start, stop, MIN, МАХ))
            printf ("Пожалуйста, повторите попытку.\n");
        else 
        {
            answer = sum_squares (start, stop);
            printf ("Cyммa квадратов целых чисел");
            printf ("oт %ld до %ld равна %g\n", start, stop, answer);
        }
        printf ("Введите значения пределов (для завершения "
                "введите 0 для обоих пределов): \n");
        printf ("нижний предел: ");
        start = get_long ();
        printf ("вepxний предел: ");
        stop = get_long (); 
        
    }
    printf ("Пpoгpaммa завершена.\n ");
    return 0;
}


long get_long (void)
{
    long input;
    char ch;
    
    while (scanf ("%ld", &input ) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar (ch);                                                       //отбросить неправильный ввод
        printf ("не является целочисленным.\nВведите");
        printf ("цeлoe число, такое как 25, -178 или 3: ");
    }
    return input;
}


double sum_squares (long а, long b)
{
    double total = 0;
    long i;
    for (i = а; i <= b; i++)
        total += (double)i * (double)i;
    
    return total;
}


bool bad_limits (long begin, long end, long low, long high)
{
    bool not_good = false;
    
    if (begin > end) 
    {
        printf ("%ld не меньше чем %ld.\n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low) 
    {
        printf ("Значения должны быть равными %ld или больше.\n", low);
        not_good = true; 
    }
    if (begin > high || end > high)
    {
        printf ("Значения должны быть равными %ld или меньше.\n", high );
        not_good = true ;
    }
    return not_good;
}