#include <stdio.h>
#include "functions.h"

int main (void)
{
    
    double arr1[SIZE][ROWS], arr2[SIZE][ROWS], arr3[SIZE][ROWS];
    
    arr_vvod (SIZE, ROWS, arr1);
    arr_vvod (SIZE, ROWS, arr2);
    
    arr_copp (SIZE, ROWS, arr1, arr2, arr3);
    
    arr_vivod (SIZE, ROWS, arr3);
    
    return 0;
    
}