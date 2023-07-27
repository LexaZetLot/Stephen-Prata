#include <stdio.h>
#include "functions.h"

//возвращает максимальное значение масива
int arr_max (int n, int arr[n])
{
    
    int i, max;
    
    max = arr[0];
    
    for (i = 0; i < n; i++)
    {
        
        max <= arr[i]? max = arr [i]: max;
        
    }
    
    return max;
    
}


//ввод
void arr_vvod (int n, int *p)
{
    int i; 
    printf ("Введите числа через пробел");
    for (i = 0; i < n; i++)
    {
        
        
        scanf ("%d", p + i);
        
    }
    
}
