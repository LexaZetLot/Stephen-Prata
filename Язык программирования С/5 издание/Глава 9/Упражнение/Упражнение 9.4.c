#include <stdio.h>

int sum (int a, int b); 

int main()
{
    
    int a, b;
    
    printf ("Введите два числа через пробел: ");
    scanf ("%d %d", &a, &b);
    printf("%d", sum (a, b));

    return 0;
}

int sum (int a, int b)
{
    
    return a + b;
    
}