//swap2.c -- пересмотренный вариант программы swap1.c 

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
    
    printf ("Первоначально u = %d и v = %d.\n", u, v);
    
    temp = u;
    u = v;
    v = temp ;
    
    printf ("Teпepь u = %d и v = %d.\n", u, v); 
    
}