//glue.c -- использование операции ##

#include <stdio.h>

#define XNAME(n) х ## n
#define PRINТ_XN(n) printf ("x" #n " %d\n", х##n );

int main (void)
{
    int XNAME (1) = 14;                                                         //результат: int x1 = 14;
    int XNAME (2) = 20;                                                         //результат: int х2 = 20;
    
    PRINТ_XN (1);                                                               //результат: printf ("x1 = %d\n", x1);
    PRINТ_XN (2);                                                               //результат: printf ("х2 = %d\n", х2);
    
    return 0; 
}