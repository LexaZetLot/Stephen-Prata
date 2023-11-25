#include <stdio.h>

char SIM = '$';

int main (void)
{
    int i, j;
    
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= i; j++)
            printf ("%c", SIM);
        printf ("\n");
    }
    
    return 0;
}