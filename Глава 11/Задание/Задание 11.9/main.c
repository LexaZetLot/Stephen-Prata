#include <stdio.h>
#include "functions.h"

int main (void)
{
    char str [MAX_SIZE];
    
    while (fgets (str, MAX_SIZE, stdin) && (str [0] != '\n'))
    {
        del_prob (str);
        printf ("%s\n", str);
    }
    
    return 0;
}