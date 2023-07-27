#include <stdio.h>

int main (void)
{
    int prob = 0, nov_srt = 0, ost = 0;
    char ch;
    
    while((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case ' ':
            prob++;
            break;
        case '\n':
            nov_srt++;
            break;
        default:
            ost++;
            break;
        }
    }
    printf ("Колличество пробелов %d, колличество новых строк %d, колличество буквенных символов %d", prob, nov_srt, ost);
    
    return 0;    
}