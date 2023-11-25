#include <stdio.h>

void vvod (int * a, int * b, int * c);
int sraw (int a, int b, int c);
void vivod (int min);

int main (int a, int b, int c, int min)
{
    vvod (&a, &b, &c);
    min = sraw (a, b, c);
    vivod (min);
    
    return 0;
    
}

void vvod (int * a, int * b, int * c)
{
    
    printf ("Введите три числа через пробел: ");
    scanf ("%d %d %d", a, b, c);

}

void vivod (int min)
{
    
    printf ("Минимальное число: %d", min);

}

int sraw (int a, int b, int c)
{
    
    int min;
    
    if (a < b)
        min = a;
    else 
        min = b;
    
    if (c < min)
        min = c;
    else;
    
    return min;
    
}