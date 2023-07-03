#include <stdio.h>

int main (void)
{
    int x1 = 0, x2 = 1, x3, res, sum = 0, i;
    
    
    
    
    do
    {
        printf ("Введите два числа через пробел:");
        scanf ("%d %d", &x1, &x2);
        
        for (i = x1, x2, res = 0; i <= x2; i++)
        {
            res = i * i;
            sum += res;
            
        }
        printf ("Сумма квадратов %d и %d = %d\n", x1 * x1, x2 * x2, sum);
        
    }while (x2 > x1);
    
    return 0;
}