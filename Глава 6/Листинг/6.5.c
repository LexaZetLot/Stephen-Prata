// cmpflt.c -- сравнение чисел с плавающей запятой
#include <math.h>
#include <stdio.h>
int main (void)
{
    const double ANSWER = 3.14159;
    double response;
    printf ("Kaкoвo значение числа pi?\n");
    scanf ("%lf", &response);
    while (fabs (response - ANSWER) > 0.0001)
    {
        printf ("Введите значение повторно!\n");
        scanf ("%lf", &response);
    }
    printf ("Tpeбyeмaя точность достигнута!\n");
    return 0;
}