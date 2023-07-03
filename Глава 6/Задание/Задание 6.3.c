#include <stdio.h>

int main (void)
{
    int i, j;
    char abc;
    
    for (i = 0; i <= 5; i++)
    {
        for (j = 0, abc = 'F'; j <= i; j++, abc--)
            printf ("%c", abc);
        printf ("\n");
    }
    
    return 0;
}