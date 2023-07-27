#include <stdio.h>
#define AX(x, y) x % 2 == 0 && x > y? 1: 0

int main (void)
{
    printf ("%d", AX(4, 2));
    
    return 0;
}