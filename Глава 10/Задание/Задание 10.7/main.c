#include <stdio.h>
#include "functions.h"

int main (int n, int n1)
{
    
    double arr1[SIZE][ROWS], arr2[SIZE][ROWS];
    
    printf ("Введите откуда дл куда: ");
    scanf ("%d %d", &n, &n1);
    
    arr_vvod (SIZE, ROWS, arr1);
    arr_copp (n - 1, n1 - 1, SIZE, ROWS, arr1, arr2);
    arr_vivod (SIZE, ROWS, arr2);
    
    return 0;
    
}