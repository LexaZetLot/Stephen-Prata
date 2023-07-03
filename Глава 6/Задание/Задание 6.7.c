#include <stdio.h>

int main (void)
{
    double x1, x2;
    
    printf ("Введите два дробных числа через пробел:");
    
    while (scanf ("%lf %lf", &x1, &x2) == 2)
    {
        printf ("Результат: %lf\n", (x1 - x2) / (x1 * x2));
        
        printf ("Введите два дробных числа через пробел:");
    }
    
    return 0;
}