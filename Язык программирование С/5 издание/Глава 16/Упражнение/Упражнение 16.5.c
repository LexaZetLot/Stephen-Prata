#include <stdio.h>
#define PR(X, Y) printf (#X "%d " #Y " %d\n", X, Y)

int main (void)
{
    PR (2, 4);
    
    return 0;
}