#include <stdio.h>
#define SIZE 8

long kvadrat(int a);

int main (void)
{
    int s;
    long f;
    scanf("%d", &s);
    f = kvadrat(s);
    printf ("%ld",f);
    return 0;
}

long int kvadrat(int a)
{
    long x;
    x = a * a;
    return x;
}