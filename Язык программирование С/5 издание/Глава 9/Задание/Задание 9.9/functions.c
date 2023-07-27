#include <stdio.h>
#include "functions.h"

void vvod (unsigned long * n, int * p)
{
    
    printf ("Ввидите два числа через пробел где второе чило система счисления: ");
    scanf ("%lu %d", n, p);
    
}

void to_binary_n (unsigned long n, int p)
{
    
    int r; 
    
    r = n % p;
    
    if (n >= p)
        to_binary (n / p, p);
    
    putchar ('0' + r);
    
}