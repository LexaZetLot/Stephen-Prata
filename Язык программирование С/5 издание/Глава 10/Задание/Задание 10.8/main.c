#include <stdio.h>
#include "functions.h"

int main (void)
{
    
    double arr1[SIZE][ROWS], arr2[SIZE][ROWS];
    
    arr_vvod (SIZE, ROWS, arr1);
    arr_copp (SIZE, ROWS, arr1, arr2);
    arr_vivod (SIZE, ROWS, arr2);
    
    return 0;
    
}