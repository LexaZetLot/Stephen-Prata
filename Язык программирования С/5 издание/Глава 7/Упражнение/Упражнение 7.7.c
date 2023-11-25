#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch;
    int lc = 0;                                                                 /*подсчет строчных символов*/
    int uc = 0;                                                                 /*подсчет прописных символов*/
    int ос = 0;                                                                 /*подсчет всех остальных символов*/
    
    while ((ch = getchar ()) != '#')
    {
        if (islower (ch))
            lc++;
        else if (isupper (ch))
            uc++;
        else
            ос++; 
    }
    printf ("%d строчных, %d прописных, %d остальных", lc, uc, ос);
    
    return 0; 
}