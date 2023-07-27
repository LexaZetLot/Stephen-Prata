/* nogood .c - программа с ошибками */ 
#include <stdio.h> 

int main (void)
{
    int n, n2, n3;
    /* В этой программе допущено несколько ошибок*/
    n = 5;
    n2 = n * n;
    n3 = n2 * n;
    printf ("n = %d, n в квадрате = %d, n в кубе = %d\n", n, n2, n3);
    return 0;
}