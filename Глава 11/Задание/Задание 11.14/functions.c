#include <stdio.h>
#include <ctype.h>
#include "functions.h"

int new_atoi (char * str)
{
    
    int c, znac, sum = 0; 
    char *p = (char *) str;
    
    c = *p++;
    znac = c;

    
    if (c == '-' || c == '+') 
        c = *p++;
    
    sum = 0;
    while (isdigit(c)) 
    {
        sum = 10 * sum + (c - '0');
        c = *p++;
    }

    if (znac == '-') 
        return -sum;
    else 
        return sum;

}