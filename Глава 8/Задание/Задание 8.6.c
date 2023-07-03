#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int ch;
    
    while ((ch = getchar()) != EOF)
    {
        if (isgraph(ch))
            putchar(ch);
    }
    
    
    return 0;
}