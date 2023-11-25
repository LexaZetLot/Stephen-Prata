#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int bukv, slovo = 0, abc = 0, punkt = 0;
    
    
    while ((bukv = getchar ()) != EOF)
    {
        if (islower(bukv) || isupper (bukv))
        {
            abc++;
        }
        
        if (((isspace (bukv)) || (ispunct (bukv))))
            slovo++;
        
        if (ispunct(bukv))
            punkt++;
        
    }
    
    printf ("\nСреднее число букв на слово равно %.2f, колличество знаков пунктуации равно %d", (float) abc / (float) slovo , punkt);
    return 0;
}