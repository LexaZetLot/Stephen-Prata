#include <stdio.h>
#include "functions.h"

int main (void)
{
    
    double arr[SIZE][ROWS];
    
    arr_vvod (SIZE, ROWS, arr);
    
    arr_sred (SIZE, ROWS, arr);
    
    printf ("Среднее значение: %f\n", arr_sred_obch (SIZE, ROWS, arr));
    
    printf ("Максимальное значение: %f\n", arr_max (SIZE, ROWS, arr));
    
    arr_vivod (SIZE, ROWS, arr);
    
    return 0;
    
}