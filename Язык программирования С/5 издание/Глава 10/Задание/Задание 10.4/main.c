#include <stdio.h>
#include "functions.h"

int main (void)
{
    
    double arr[SIZE];
    
    arr_vvod (SIZE, arr);

    printf ("Максимальное число: %f", arr_max (SIZE, arr));
    
    
    
    return 0;
    
}