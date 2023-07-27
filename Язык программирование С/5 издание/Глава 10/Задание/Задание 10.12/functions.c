#include <stdio.h>
#include "functions.h"

//ввод
void arr_vvod (int size, int rows, double arr[size][rows])
{
    int i, j;
    
    printf ("Введите числа через пробел а через каждые %d Enter: \n", SIZE);
    
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < ROWS; j++)
            scanf ("%lf", &arr[i][j]);
}

//считает среднее значение по строкам
void arr_sred (int size, int rows, double arr[size][rows])
{
    
    int i, j, flag;
    double sred;
    
    for (i = 0, sred = 0, flag = 0; i < SIZE; i++, printf ("Средне значение %d равно: %lf\n", i, sred / flag), flag = 0, sred = 0.0)
        for (j = 0; j < ROWS; j++, flag++)
            sred += arr[i][j];
    
}

//общее среднее
double arr_sred_obch (int size, int rows, double arr[size][rows])
{
    
    int i, j, flag;
    double sred;
    
    for (i = 0, flag = 0, sred = 0.0; i < SIZE; i++)
        for (j = 0; j < ROWS; j++, flag++)
            sred += arr[i][j];
    
    
    return sred / flag;
}

//поиск максимального 
double arr_max (int size, int rows, double arr[size][rows])
{
    
    int i, j;
    double max;
    
    max = **arr;
    
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < ROWS; j++)
            max <= arr[i][j]? max = arr[i][j]: max;
    
    return max;
    
}

//вывод
void arr_vivod (int size, int rows, double arr[size][rows])
{
    
    int i, j;
    
    for (i = 0; i < SIZE; i++, printf("\n"))
        for (j = 0; j < ROWS; j++)
            printf ("%.1lf ", arr[i][j]);
        printf("\n");
    
}][rows])
{
    
    int i, j;
    double max;
    
    max = **arr;
    
    for (i = 0; i < SIZE; i++)
        for (j = 0; i < ROWS; j++)
            max > arr[i][j] ? max = arr[i][j] : max;
    
    return max;
    
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