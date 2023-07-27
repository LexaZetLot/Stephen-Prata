#include <stdio.h>
#include "functions.h"

void vvod (double * i, double *j)
{
    
    printf ("Введиет два числа через пробел: ");
    scanf ("%lf %lf", i, j);
    
}


double chline (double i, double j)
{
    
    return (2 / ((1 / i) + (1 / j)));
    
}

void vivod (double a)
{
    
    printf ("Среднее гармоническое чисел: %lf", a);
    
}