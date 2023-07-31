//glue.c -- использование операции ##

#include <stdio.h>

#define XNAME(n) х ## n
#define PRINТ_XN(n) printf ("x" #n " %d\n", х##n );

int main (void)
{
    int XNAME (1) = 14;                                                         //превращается в int x1 = 14;
    int XNAME (2) = 20;                                                         //превращается в int х2 = 20;
    int x3= 30;

    PRINТ_XN (1);                                                               //превращается в printf ("x1 = %d\n", x1);
    PRINТ_XN (2);                                                               //превращается в printf ("х2 = %d\n", х2);
    PRINТ_XN (3);								//превращается в printf ("х3 = %d\n", х3);
    
    return 0; 
}	