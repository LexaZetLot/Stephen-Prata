//predef.c -- предопределенные идентификаторы

#include <stdio.h>

void why_me ();

int main (void)
{
    printf ("Фaйл: %s.\n", __FILE__);
    printf ("Дaтa: %s.\n", __DATE__);
    printf ("Bpeмя: %s.\n", __TIME__);
    printf ("B epcия: %ld.\n", __STDC_VERSION__);
    printf ("Это строка %d. \n", __LINE__);
    printf ("Это функция %s\n", __func__);
    why_me (); 
    
    return 0; 
}

void why_me ()
{
    printf ("Это функция %s\n", __func__);
    printf ("Это строка %d. \n", __LINE__);
}