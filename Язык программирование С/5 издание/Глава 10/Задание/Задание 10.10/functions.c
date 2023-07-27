#include <stdio.h>
#include "functions.h"

//удваивает знаяения
void arr_copp (int size, int rows, double arr1[size][rows])
{
    
    int i, j;
    
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < ROWS; j++)
            arr1[i][j] *= 2;
    
}


//ввод
void arr_vvod (int size, int rows, double arr[size][rows])
{
    int i, j;
    
    printf ("Введите числа через пробел а через каждые %d Enter: \n", SIZE);
    
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < ROWS; j++)
            scanf ("%lf", &arr[i][j]);
    
}


//вывод
void arr_vivod (int size, int rows, double arr[size][rows])
{
    
    int i, j;
    
    for (i = 0; i < SIZE; i++, printf("\n"))
        for (j = 0; j < ROWS; j++)
            printf ("%.1lf ", arr[i][j]);
        printf("\n");
    
}