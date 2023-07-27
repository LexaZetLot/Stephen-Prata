#include <stdio.h>
#include "functions.h"

int main (void)
{
    
    int arr[SIZE],i;
    
    arr_vvod (SIZE, arr);

    printf ("Максимальное число: %d", arr_max (SIZE, arr));
    
    
    
    return 0;
    
}