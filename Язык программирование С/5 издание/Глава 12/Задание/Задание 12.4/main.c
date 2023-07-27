#include <stdio.h>
#include "functions.h"

int main (void)
{
    int i;
    
    for (i = 0; i < 1000000; i++)
        score();
    
    return 0;
}