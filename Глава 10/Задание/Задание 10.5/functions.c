#include <stdio.h>
#include "functions.h"

//возвращает максимальное значение масива
double arr_max (int n, double arr[n])
{
    
    int i;
    double max, min;
    
    max = min = arr[0];
    
    
    for (i = 0; i < n; i++)
    {
        
        max <= arr[i]? max = arr [i]: max;
        min >= arr[i]? min = arr [i]: min;
        
    }
    
    
    return max - min;
    
}


//ввод
void arr_vvod (int n, double * p)
{
    int i; 
    printf ("Введите числа через пробел");
    for (i = 0; i < n; i++)
    {
        
        
        scanf ("%lf", p + i);
        
    }
    
}
