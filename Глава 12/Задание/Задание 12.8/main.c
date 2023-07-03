#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main (void)
{
    int * pa;
    int size;
    int value;
    
    printf ("Bвeдитe количество элементов: ");
    scanf ("%d", &size);
    
    while (size > 0)
    {
        printf ("Введите значение для инициализации: ");
        scanf ("%d", &value);
        
        pa = make_array (size, value);
        
        if (pa) 
        {
            show_array (pa, size);
            free (pa);
        }
        
        printf ("Bвeдитe количество элементов (или значение < 1 для выхода из программы): ");
        scanf ("%d", &size);
    }
    
    printf ("Пpoгpaммa завершена.\n");
    
    return 0;
}