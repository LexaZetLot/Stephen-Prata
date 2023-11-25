#include <stdio.h>
#include "functions.h"

int main (void)
{
    
    double arr1[SIZE][ROWS];
    
    arr_vvod (SIZE, ROWS, arr1);
    
    arr_copp (SIZE, ROWS, arr1);
    
    arr_vivod (SIZE, ROWS, arr1);
    
    return 0;
    
}