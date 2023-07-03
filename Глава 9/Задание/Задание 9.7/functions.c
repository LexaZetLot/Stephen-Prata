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
    int i; 
    
    if (p > 0)
    {
        for (i = 1; i <= p; i++)
            pow *= n;
        
    }
    else 
    {
        for (i = -1; i >= p; i--)
            pow *= (1 / n);
        
    }
    
    return pow;                                             
}

void vivod (double pow)
{
    
   printf ("Степень равна: %lf", pow); 
    
}