#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <time.h>

int arr_celect (int * arr, int size, int size_celect) 
{
    int arr_bufer [size_celect], buf;
    
    srand (time (0));
    for (int i = 0; i < size_celect;)
    {
        buf = rand () % size;
        if (dufer_celect (arr_bufer, size_celect, buf))
        {
            arr_bufer [i] = buf;
            printf ("%d\n", arr [buf]);
            i++;
        }
    }
}

int dufer_celect (int * arr, int size, int x)
{
    int flag = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (arr [i] != x)
            flag++;
        
    }
    if (flag == size)
        return 1;
    if (flag != size)
        return 0;
}