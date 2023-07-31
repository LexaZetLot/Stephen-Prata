/*subst.c -- подстановка в строке*/

#include <stdio.h>

#define PSQR(x) printf ("Квадрат " #x " равен %d.\n", ((x)*(x)))

int main (void)
{
    int у = 5;
    PSQR (у);
    PSQR (2 + 4);
    
    return 0; 
}