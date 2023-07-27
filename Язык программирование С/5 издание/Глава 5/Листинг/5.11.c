/* post_pre.c - - постфиксная и префиксная формы */
#include <stdio.h>

int main(void)
{
    int а = 1, Ь = 1;
    int aplus, plusb;
    
    aplus = а++;                                                               /* постфиксная форма */
    plusb = ++Ь;                                                               /* префиксная форма */
    printf ("a  aplus   Ь   plusb\n") ;
    printf ("%d %4d % 5d % 5d\n ", а, aplus, Ь, plusb);
    
    return 0;
}