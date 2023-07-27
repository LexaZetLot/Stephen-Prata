#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int rev_itobs (char * str);

int main()
{
    char * pbin = "01001001"; 
    
    printf ("%d", rev_itobs (pbin));
    
    return 0;
}

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
