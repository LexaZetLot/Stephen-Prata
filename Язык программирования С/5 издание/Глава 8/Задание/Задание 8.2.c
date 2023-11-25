#include <stdio.h>

int main (void)
{
    int ch, i;
    
    while ((ch = getchar()) != EOF)
    {   
        for (i = 0; i < 10; i++, ch = getchar())
        {
            switch(ch)
            {
            case '\n':
                printf ("\\n-10 ");
                break;
            case '\t':
                printf ("\\t-9 ");
                break;
            case ' ':
                printf (" -32 ");
                break;
            default:
                putchar (ch);
                printf ("-%d ", ch);
                break;
            }
        }
        printf("\n");
        
    }
    
    return 0;
}

