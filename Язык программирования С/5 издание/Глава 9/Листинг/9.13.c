//swap1.c -- первая попытка создания функции обме а значениями 

#include <stdio.h>

void interchange (int u, int v);                                                //объявление функции 

int main (void)
{
    
    int x = 5, у = 10;
    
    printf ("Первонач ально х = %d и у = %d .\n", x, у);
    
    interchange (x, у);
    
    printf ("Teпepь х = %d и у = %d.\n", x, у);
    
    return 0;
    
}

void interchange (int u, int v)                                                 //объявление функции
{
    
    int temp;
    
    temp = u;
    u = v;
    v = temp ;
    
}