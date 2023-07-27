#include <stdio.h>

int main (void)
{
    char ch;
    
    while ((ch = getchar ()) != '#')
    {
        switch (ch)
        {
        case '\n':
            break;
        case 'c':
            break;
        case 'b':
            break;
        case 'g':
           default: break;
        }
        printf ("Шaг 1\n");
        printf ("Шaг 2\n");
        printf ("Шaг 3\n ");
    }
    printf ("Гoтoвo\n");
    return 0;
}