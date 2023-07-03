#include <stdio.h>
#include "functions.h"

void vvod (int * i, int *j)
{
    
    printf ("Введиет два числа через пробел: ");
    scanf ("%d %d", i, j);
    
}


void larger_of (int * i, int * j)
{
    
    if (*i < *j)
        *i = *j;
    else
        *j = *i;
    
}

void vivod (int i, int j)
{
    
    printf ("Ваши два числа: %d %d", i, j);
    
}