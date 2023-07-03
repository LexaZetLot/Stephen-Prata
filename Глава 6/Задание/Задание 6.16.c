#include <stdio.h>

int main (void)
{
    double chak = 1000000;
    int i = 0;
    

    while (chak >= 0)
    {
        chak -= 100000;
        chak *= 1.08;
        i++;
        printf ("%d %lf\n", i, chak);
    }
    
    
    return 0;
}
