#include <stdio.h>
#include "functions.h"

//возвращает максимальное значение масива
void arr_copp (int n, int n1, int size, int rows, double arr1[size][rows], double arr2[size][rows])
{
    
    int i, j;
    
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < ROWS && i >= n && i <= n1; j++)
            arr2[i][j] = arr1[i][j];
    
}


//ввод
void arr_vvod (int size, int rows, double arr[size][rows])
{
    int i, j;
    
    printf ("Введите числа через пробел а через каждые %d Enter: \n", ROWS);
    
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