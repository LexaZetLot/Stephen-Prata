/*typesize.c - распечатка размеров типов*/ 

#include <stdio.h>

int main (void)
{
    /*Стандарт C99 предусматривает спецификатор %zd для размеров типов*/
    printf ("Tип int имеет размер %u байт (а, ов).\n", sizeof (int));
    printf ("Tип char имеет размер %u байт (а, ов).\n", sizeof (char));
    printf ("Tип long имеет размер %u байт (а, ов).\n", sizeof (long));
    printf ("Tип double имеет размер %u байт (а, ов).\n", sizeof (double)); 
    
    return 0; 
}