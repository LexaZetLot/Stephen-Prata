#include <stdio.h>

int const SIZE = 8;

int main (void)
{
    int arr1[SIZE], arr2[SIZE],i ,j;
    
    for (i = 0; i < SIZE; i++)
        scanf ("%d", &arr1[i]);
    arr2[0] = arr1[0];    
    for (i = 1; i < SIZE; i++)
        arr2[i] = arr2[i - 1] + arr1[i];
        
    for (i = 0; i < SIZE; i++)
    {
        printf ("%3d ", arr1[i]);
    }
    
    printf ("\n");
    
    for (i = 0; i < SIZE; i++)
    {
        printf ("%3d ", arr2[i]);
    }
        
    
    
    return 0;
}