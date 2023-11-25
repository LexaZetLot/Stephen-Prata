#include <stdio.h>

int main (void)
{
    int i = 0;
    char ch;
    
    //printf("Символ      Код");
    while ((ch = getchar ()) != '#')
    {
        if (i < 8){
            printf ("%4c%4d\n", ch, ch);}
        else 
        {
            i = 0;
            printf ("\n\n\n");
        }
        i++;
    }
    return 0;
}
