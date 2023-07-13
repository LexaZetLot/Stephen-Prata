#include <stdio.h>
#include "functions.h"


int main (int argc, char * argv [])
{
    int a = 56893563;
    int b = 1;
    
    printf ("%d", rev_itobs (a, b));

    return 0;
}