// rows2.c -- использование зависимых вложенных циклов 

#include <stdio.h>


int main (void)
{
    int row;
    char ch;
    const int ROWS = 6;
    const int CHARS = 6; 
    
    for ( row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
            printf ("%c", ch);
        printf ("\n");
    }
    
    return 0; 
}