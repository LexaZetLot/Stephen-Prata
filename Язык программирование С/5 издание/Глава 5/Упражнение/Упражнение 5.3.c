// running.c -- программа, полезная для тех, кто занимается бегом 
#include <stdio.h>
int main ( void)
{
    float i = 1;
    float n;
    printf ("Бyдьтe осторожны! Далее идет последовательность дробей!\n");
    while (i++ < 30)
    {
        n = 1 / i;
        printf ("%f\n", n);
    }
    printf ("Boт и все!\n");
return 0;
}