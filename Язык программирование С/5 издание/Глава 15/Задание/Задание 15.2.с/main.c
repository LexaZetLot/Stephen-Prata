#include <stdio.h>
#include "functions.h"


int main (int argc, char * argv [])
{
    int a, b;
    char bufer [9];
    
    argc = 3;
    argv [1] = "10101001";
    argv [2] = "00100111";
    
    printf ("Операция ~\n");
    a = ~rev_itobs (argv [1]);
    b = ~rev_itobs (argv [2]);
    printf ("Первый аргумент - %s\n", itobs (a, bufer));
    printf ("Второй аргумент - %s\n", itobs (b, bufer));
    printf ("********************************\n");
    
    printf ("Операция &\n");
    a = rev_itobs (argv [1]);
    b = rev_itobs (argv [2]);
    printf ("Результат - %s\n", itobs (a & b, bufer));
    printf ("********************************\n");
    
    printf ("Операция |\n");
    a = rev_itobs (argv [1]);
    b = rev_itobs (argv [2]);
    printf ("Результат - %s\n", itobs (a | b, bufer));
    printf ("********************************\n");
    
    printf ("Операция ^\n");
    a = rev_itobs (argv [1]);
    b = rev_itobs (argv [2]);
    printf ("Результат - %s\n", itobs (a ^ b, bufer));
    printf ("********************************\n");
    
    return 0;
}