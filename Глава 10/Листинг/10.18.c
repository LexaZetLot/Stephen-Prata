//vararr2d.c -- функции, исnользующие массивы переменной длины

#include <stdio.h>

#define ROWS 3 
#define COLS 4 

int sum2d (int rows, int cols, int ar[rows][cols]); 

int main (void)
{
    
    int i, j;
    int rs = 3;
    int cs = 10;
    
    int junk [ROWS][COLS] =
    {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };
    
    int morejunk [ROWS - 1][ COLS + 2] =
    {
        {20, 30, 40, 50, 60, 70},
        {5, 6, 7, 8, 9, 10} 
    };
    
    int varr [rs][cs];                                                          // массив переменной длины
    
    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            varr [i][j] = i * j + j;
    
    printf ("Maccив размерности 3x5\n"); 
    printf ("Cyммa всех элементов = %d\n", sum2d (ROWS, COLS, junk)); 
    printf ("Maccив размерности 2х6 \n");
    printf ("Cyммa всех элементов = %d\n", sum2d ( ROWS - 1, COLS + 2, morejunk));
    printf ("Maccив переменной длины размерности 3x10 \n");
    printf ("Cyммa всех элементов = %d\n", sum2d (rs, cs, varr));
    
    return 0;
    
}

// функция с параметром в виде массива переменной длины
int sum2d (int rows, int cols, int ar[rows][cols])
{
    
    int r;
    int с;
    int tot = 0;
    
    for (r = 0; r < rows; r++) 
        for (с = 0; с < cols; с++) 
            tot += ar[r][с];
    
    return tot;
    
}