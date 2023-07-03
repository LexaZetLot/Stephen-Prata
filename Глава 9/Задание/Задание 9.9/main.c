#include <stdio.h>
#include "functions.h"

int main (unsigned long n, int p)
{
    vvod (&n, &p);
    
    to_binary_n (n, p);
    
    return 0;
    
}