/*charcode.c - отображает кодовое значение символа*/

#include <stdio.h>

int main (void)
{
    char ch ;

    printf ("Bвeдитe какой-нибудь символ.\n");
    scanf ("%c", &ch);                                                          /*пользователь вводит символ*/
    printf ("Koд символа %c равен %d.\n", ch, ch);
    
    return 0; 
}