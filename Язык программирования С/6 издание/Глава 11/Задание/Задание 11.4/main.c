#include <stdio.h>
#include "functions.h"

int main (void)
{
    char str [MAX_SIZE];
    
    strout (str, 3);
    
    printf ("%s", str);
    
    return 0;   
}