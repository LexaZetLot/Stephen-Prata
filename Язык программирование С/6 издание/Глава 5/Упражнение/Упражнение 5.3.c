#include <stdio.h>

int main (void)
{
    printf ("%.2f\n", 30.0f / 4.0f * 5.0f);
    printf ("%.2f\n", 30.0f / (4.0f * 5.0f));
    printf ("%d\n", 30 / 4 * 5);
    printf ("%d\n", 30 / 5 * 4);
    printf ("%.2f\n", 30 / 4.0f * 5);
    printf ("%.2f\n", 30 / 4 * 5.0f);
    
    return 0;
}