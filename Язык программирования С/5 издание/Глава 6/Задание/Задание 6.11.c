#include <stdio.h>

int const SIZE = 8;

int main (void)
{
    double i, j, res1, res2;
    int koll, znak;
    
    printf ("Введите колличество последовательносте: ");
    scanf ("%d", &koll);
    
    for (i = 1; i <= koll; i++)
        res1 += 1.0 / i;
        
    for (i = 1; i <= koll; i++)
    {
        for (j = 0, znak = 1; j <= i; j++)
            znak *= -1;
        res2 += (1.0 / i) * znak;
    }
    printf ("Результат: %lf\nРезультат: %lf", res1, res2);
    
    
    return 0;
}