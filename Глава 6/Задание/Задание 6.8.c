#include <stdio.h>

double vihslenie (double x1, double x2);

int main (void)
{
    double x1, x2, res;
    
    printf ("Введите два дробных числа через пробел:");
    
    while (scanf ("%lf %lf", &x1, &x2) == 2)
    {
        printf ("Результат: %lf\n", res = vihslenie(x1, x2));
        
        printf ("Введите два дробных числа через пробел:");
    }
    
    return 0;
}

double vihslenie (double x1,double x2)
{
    double x3;
    
    x3 = (x1 - x2) / (x1 * x2);
    
    return x3;
}