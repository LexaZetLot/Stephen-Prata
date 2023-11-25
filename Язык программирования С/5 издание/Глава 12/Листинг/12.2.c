//forc99.c -- правила нового стандарта С99, касающиеся блоков

#include <stdio.h> 

int main (void)
{
    int n = 10;
    
    printf ("Первоначально n = %d\n", n);
    for (int n = 1; n < 3; n++)
        printf ("цикл 1: n = %d\n", n);
    
    printf ("Пo завершении цикла 1 n = %d\n", n);
    for (int n = 1; n < 3; n++)
    {
        printf ("индeкc цикла 2 n = %d\n", n);
        int n = 30;
        printf ("цикл 2: n = %d\n", n);
        n++; 
    }
    printf ("Пo завершении цикла 2 n = %d\n", n); 
    
    return 0;
}