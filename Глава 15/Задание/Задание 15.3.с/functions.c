#include <string.h>
#include "functions.h"



int rev_itobs (int a)
{
    static int flag;
    int mask = 01;
    int bufer;
    int size = 8 * sizeof (int);
    
    for (int i = 0; i < size; i++)
    {
        bufer = a & mask;
        mask <<= 1;
        
        if ((bufer % 2 == 0 || bufer == 1) && bufer != 0)
            flag++;
    }

    return flag;
}