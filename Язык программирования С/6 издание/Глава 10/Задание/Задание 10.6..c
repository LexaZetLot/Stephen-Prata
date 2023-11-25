#include <stdio.h>

#define SIZE 9

void double_arr_rev (double arr [], int size);

int main (void)
{
    double arr [SIZE] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9}; 
    double * pt = arr;
    
    double_arr_rev (pt, SIZE);
    
    for (int i = 0; i < SIZE; i++)
    {
        printf ("%.2lf ", arr [i]);
    }
    
    return 0;
}

void double_arr_rev (double arr [], int size)
{
    int i, j;
    double bufer;
    
    for (i = 0, j = size - 1; i != size / 2; i++, j--)
    {
        bufer = arr [i];
        arr [i] = arr [j];
        arr [j] = bufer;
    }
}