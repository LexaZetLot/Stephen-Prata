#include <stdio.h>
#include "functions.h"

int main (void)
{
    
    double arr[SIZE];
    
    arr_vvod (SIZE, arr);

    printf ("Разность между min и max: %f", arr_max (SIZE, arr));
    
    
    
    return 0;
    
}