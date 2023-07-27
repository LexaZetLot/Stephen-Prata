#include <string.h>
#include "functions.h"



int rev_itobs (char * str)
{
    int size = strlen (str) - 1;
    int n = 0;
    
    for (int i = 0; i <= size; i++)
    {
        n |= 01 & str [i];
        if (i != size)
            n <<= 1;
    }

    return n;
}

char * itobs (int n, char * ps) 
{
    int i;
    static int size = 8;
    
    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps [i] = (01 & n) + '0';
    ps [size] = '\0';
    
    return ps; 
}