#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void my_random (void)
{
    int i, bufer;
    static int bufer_1 [9]; 
    
    srand ((unsigned int) time (0));
    
    for (i = 1; i <= MAX;)
    {
        bufer = rand () % 11;
        if (bufer != 0)
        {
            switch (bufer)
            {
                case 1:
                    bufer_1 [0] += 1;
                    break;
                case 2:
                    bufer_1 [1] += 1;
                    break;
                case 3:
                    bufer_1 [2] += 1;
                    break;
                case 4:
                    bufer_1 [3] += 1;
                    break;
                case 5:
                    bufer_1 [4] += 1;
                    break;
                case 6:
                    bufer_1 [5] += 1;
                    break;
                case 7:
                    bufer_1 [6] += 1;
                    break;
                case 8:
                    bufer_1 [7] += 1;
                    break;
                case 9:
                    bufer_1 [8] += 1;
                    break;
                case 10:
                    bufer_1 [9] += 1;
                    break;
            }
            i++;
        }
    }
    for (i = 0; i < 10; i++)
        printf ("%d\n", bufer_1 [i]);
}