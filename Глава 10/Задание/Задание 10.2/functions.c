#include <stdio.h>
#include "functions.h"

void copp_arr (double arr1[], double arr2[], int n)
{
    
    int i;
    
    for (i = 0; i < n; i++)
        arr2[i] = arr1[i];
    
}

void copp_ptr (double * ptr, double * pta, int n)
{
    
    int i;
    
    for (i = 0; i < n; i++, ptr++, pta++)
        *pta = *ptr;
}

void vivod (double * ptr, int n)
{
    int i;
    
    for (i = 0; i < n; i++)
        printf ("%.1lf\n", *ptr + i);
    
}