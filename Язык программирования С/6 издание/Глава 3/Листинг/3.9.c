/*badcount.c - неверное число аргументов*/  

#include <stdio.h>

int main (void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    
    printf ("%d\n", n, m);                                                      /*слишком много аргументов*/
    printf ("%d %d %d\n", n);                                                   /*аргументов недостаточно*/
    printf ("%d %f\n", f, g);                                                   /*неправильные типы спецификаторов*/ 
    
    return 0; 
}