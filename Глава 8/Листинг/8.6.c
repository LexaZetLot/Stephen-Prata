/* showchar2.c -- печатает символы в строках и столбцах */ 
#include <stdio.h> 

void display (char cr, int lines, int width); 

int main (void)
{
    int ch;                                                                     /* символ, выводимый на печать */ 
    int rows, cols;                                                             /* количество строк и столбцов */
    
    printf ("Bвeдитe символ и два целых числа:\n");
    
    while ((ch = getchar ()) != '\n')
    {
        if (scanf ("%d %d", &rows, & cols) != 2)
            break;
            
        display (ch, rows, cols); 
        
        while (getchar () != '\n')
            continue; 
        
        printf ("Введите еще один символ и дв а целых числа;\n");
        printf ("введите символ новой строки для завершения программы.\n");
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
        putchar ('\n');                                                         /* закончить с троку и начать новую */
    }
}