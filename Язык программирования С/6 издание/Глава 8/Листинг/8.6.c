/*showchar2.c -- выводит символы в строках и столбцах*/

#include <stdio.h> 

void display (char cr, int lines, int width); 

int main (void)
{
    int ch;                                                                     /*выводимый символ           */ 
    int rows, cols;                                                             /*количество строк и столбцов*/
    
    printf ("Bвeдитe символ и два целых числа:\n");
    
    while ((ch = getchar ()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        
        display (ch, rows, cols); 
        
        printf ("Bвeдитe еще один символ и два целых числа;\n");
        printf ("для завершения введите символ новой строки.\n");
    }
    
    printf ("Пpoгpaммa завершена.\n");
    
    return 0;
}

void display (char cr, int lines, int width)
{
    int row, col;
    
    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar (cr);
        putchar ('\n');                                                         /*закончить строку и начать новую*/
    }
}