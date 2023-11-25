#include <stdio.h>
#include "functions.h"

void vvod (char * ch, int * i, int *j)
{
    
    printf ("Введиет символ и два числа через пробел:");
    scanf ("%c %d %d", ch, i, j);
    
}


void chline (int ch, int i, int j)
{
    int stolb, strok;
    
    
    for (strok = 0; strok <= STROK; strok++, printf ("\n"))
    {
        for (stolb = 0; stolb <= STOLB; stolb++)
        {
            
            if (stolb >= i && stolb <= j)
                putchar (ch);
            else
                putchar (34);
            
        }
        
    }
    
}