#include <stdio.h>
#define AX(x, y) x < y? x: y

int main (void)
{
    printf ("%d", AX(4, 2));
    
    return 0;
}