#include <stdio.h>
#include <string.h>

int main (void)
{
    int i;
    char slovo[30];
    
    
    printf ("Введите слово: ");
    scanf ("%s", slovo);
    
    for (i = sizeof (slovo); i >= 0; i--)
        printf ("%c",slovo[i]);
    
    
    
    return 0;
}