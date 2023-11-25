#include <stdio.h>
#include "functions.h"

void vvod (char * ch, int * i, int *j)
{
    
    printf ("Введиет символ и два числа через пробел: ");
    scanf ("%c %d %d", ch, i, j);
    
}


void chline (int ch, int i, int j)
{
    int stolb, strok;
    
    
    for (strok = 1; strok <= j; strok++, printf ("\n"))
    {
        for (stolb = 1; stolb <= i; stolb++)
        {
            
            putchar (ch);
            
        }
        
    }
    
}