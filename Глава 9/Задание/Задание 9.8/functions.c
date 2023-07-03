#include <stdio.h>
#include "functions.h"

void vvod (double * n, int * p)
{
    
    printf ("Ввидите два числа через пробел где второе чило степень: ");
    scanf ("%lf %d", n, p);
    
}

double power (double n, int p)                             
{
    
    double pow = 1;
    
    if (FLAG_POL_STEP <= p && p > 0)
        pow *= n * power (n, p - 1);
    else if (-1 >= p && p < 0)
        pow *= (1 / n) * power (n, p + 1);
    
    
    
    
    return pow;                                             
}

void vivod (double pow)
{
    
   printf ("Степень равна: %lf", pow); 
    
}