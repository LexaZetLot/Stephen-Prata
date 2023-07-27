#include <stdio.h>

int const SIZE = 8;

int main (void)
{
    int hislo[SIZE], i;
    
    printf ("Введите числа: ");
    
    for(i = 0; i < SIZE; i++)
        scanf ("%d", &hislo[i]);
    
    printf ("\n");
    
    for(i = SIZE - 1; i >= 0; i--)
        printf ("%d ", hislo[i]);
    
    
    return 0;
}