#include <stdio.h>

int main (void)
{
    
    int chislo, x = 0;
    
    printf ("Введите число: \n");
    scanf ("%d", &chislo);
    
    x = chislo + 10;
    
    printf ("%d", chislo);
    
    while (chislo++ < x)
        printf ("%5d", chislo);
        
    return 0; 
}