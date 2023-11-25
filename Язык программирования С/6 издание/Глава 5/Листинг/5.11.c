/*post_pre.c -- постфиксная и префиксная формы*/

#include <stdio.h>

int main(void)
{
    int а = 1, b = 1;
    int a_post, pre_b;
    
    a_post = а++;                                                               //значение а++ во время этапа присваивания 
    pre_b = ++b;                                                                //значение ++Ь во время этапа присваивания
    printf ("a  a_post   Ь   pre_b\n") ;
    printf ("%d %4d % 5d % 5d\n ", а, a_post, b, pre_b);
    
    return 0;
}