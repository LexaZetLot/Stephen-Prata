#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int * make_array (int elem, int val)
{
    int * pa = malloc (elem * sizeof (int));
    int i;
    
    for (i = 0; i < elem; i++)
        pa [i] = val;
    
    return pa;
}

void show_array (const int ar[], int n)
{
    int i, j = 1;
    
    for (i = 0; i < n; i++, j++)
    {
        printf ("%2d", ar [i]);
        if (j % 8 == 0)
            printf ("\n");
        
    }
    printf ("\n");
}