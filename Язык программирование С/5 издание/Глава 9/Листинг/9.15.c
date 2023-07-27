//swapЗ.c -- использование указателей для обмена значениями переменных 

#include <stdio.h>

void interchange (int * u, int * v);                                            

int main (void)
{
    
    int x = 5, у = 10;
    
    printf ("Первонач ально х = %d и у = %d .\n", x, у);
    
    interchange (&x, &у);                                                       // передача адресов в функцию 
    
    printf ("Teпepь х = %d и у = %d.\n", x, у);
    
    return 0;
    
}

void interchange (int * u, int * v)
{
    
    int temp;
    
    temp = *u;                                                                  // переменная temp получает значение, на которое указывает u
    *u = *v;
    *v = temp;
    
}