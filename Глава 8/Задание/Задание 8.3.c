#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int ch, i, I;
    
    while ((ch = getchar ()) != EOF)
    {
        if (islower(ch))
            i++;
        else if (isupper(ch))
            I++;
    }
    
    printf ("Нижний ренистр - %d, верхний регистр - %d", i, I);
    
    
    return 0;
}