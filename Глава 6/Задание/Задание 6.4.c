#include <stdio.h>

int main (void)
{
    int i, j, index_voz, ubiv, k;
    char abc, prob, vvod;
    
    scanf ("%c", &vvod);
    
    for (i = 0, k = -1; i < 5; i++, k++)
    {
        for (index_voz = 3, prob = ' '; index_voz >= i;index_voz--)
            printf ("%c", prob);
        for (j = 0, abc =  vvod; j <= i; j++, abc++)
            printf ("%c", abc);
        for (ubiv = 1, abc = vvod + k; ubiv <= i; ubiv++, abc--)
            printf ("%c", abc);
        
        printf ("\n");
    }
    
    return 0;
}