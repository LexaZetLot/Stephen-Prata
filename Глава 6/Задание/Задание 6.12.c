#include <stdio.h>

int const SIZE = 8;

int main (void)
{
    int arr[SIZE], i, j;
        for (i = 0; i < SIZE; i++)
    {
        arr[i] = 1;
        
        for (j = 0; j <= i; j++)
            arr[i] *= 2; 
    }
    
    i = 0;
    
    do {
    
    
    printf ("%d\n", arr[i]);
    
    i++;
    
    }while (i < SIZE);
    return 0;
}