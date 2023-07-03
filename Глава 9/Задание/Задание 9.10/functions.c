#include <stdio.h>
#include "functions.h"

void vvod (int * p)
{
    
    printf ("Ввидите порядковый номер числа: ");
    scanf ("%d", p);
    
}

int Fibonacci (int a)
{
    
    int i, x = NACHALO, y = NACHALO, chislo, flag;
    
    for (i = NACHALO; i <= (a - NACHALO); i++)
    {
        
        chislo = x + y;
        
        if (i % 2)
            flag = 1;
        else 
            flag = 0;
        
        if (flag == 1)
            x = chislo;
        else 
            y = chislo;
        
        
        
    }
    
    return chislo;
    
}

void vivod (int a)
{
    
    printf ("Число Фибоначчи равно: %d", a);

}