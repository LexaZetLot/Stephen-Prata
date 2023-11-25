#include <string.h>
#include <stdio.h>
#include "functions.h"


int rev_itobs (int a, int b)
{
    static int flag;
    int mask = 01;
    int bufer;
    int size = 8 * sizeof (int);
    
    if (b != 1)
        mask <<= (b - 1);
    
    bufer = a & mask;
    
    
    if ((bufer % 2 == 0 || bufer == 1) && bufer != 0)
        flag++;
    
    return flag;
}