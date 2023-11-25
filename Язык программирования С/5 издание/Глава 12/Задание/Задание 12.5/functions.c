#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void my_random (void)
{
    int i, bufer = 10, bufer_1;
    
    srand ((unsigned int) time (0));
    
    for (i = 1; i <= MAX;)
    {
        bufer_1 = rand () % 11;
        
        if (bufer_1 != 0 && bufer >= bufer_1)
        {
            printf ("%d.%d\n", i, bufer_1);
            i++;
            bufer = bufer_1;
        }
    }
}