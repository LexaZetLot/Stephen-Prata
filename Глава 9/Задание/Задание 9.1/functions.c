#include <stdio.h>
#include "functions.h"

void vivod (double min)
{
    
    printf ("Минмальное число: %lf", min);
    
}

double min (double a, double b)
{
    
    return a < b ? a : b;
    
}

void vvod (double * a, double * b)
{
    
    printf ("Ввидите два числа через пробел: ");
    scanf ("%lf %lf", a, b);
    
}