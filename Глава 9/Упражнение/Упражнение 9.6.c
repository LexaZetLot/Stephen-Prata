#include <stdio.h>

void alter (int * a, int * b);
void vivod (int a, int b);
void vvod (int * a, int * b);

int main (int a, int b)
{
    vvod (&a, &b);
    alter (&a, &b);
    vivod (a, b);
    
    return 0;
    
}

void vvod (int * a, int * b)
{
    
    printf ("Введите два числа через пробел: ");
    scanf ("%d %d", a, b);

}

void alter (int * a, int * b)
{
    
    int becap;
    
    becap = *a;
    *a += *b;
    *b = becap - *b;
    
}

void vivod (int a, int b)
{
    
    printf ("Сумма равна %d, разность равна %d", a, b);

}