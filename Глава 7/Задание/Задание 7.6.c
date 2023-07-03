#include <stdio.h>

int main (void)
{
    char ch;
    int i, e = 0;
    
    while ((ch = getchar()) != '#')
    {
        if (ch == 'e')
            e = 1;
        else if ((ch == 'i') &&  e == 1)
            i++;
    }
    printf ("%d", i);
    return 0;
}