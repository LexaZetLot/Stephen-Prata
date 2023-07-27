/* prntval.c -- обнаружение возвращаемого значения print f () */ 

#include <stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;
    rv = printf ("%d градусо в по Фаренгейту соответствуют точке кипенияводы.\n" , bph2 o ) ; 
    printf ("Функция printf () выводит %d символов.\n", rv); 

    return 0;
}