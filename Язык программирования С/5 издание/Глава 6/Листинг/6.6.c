/* tапdf.c - - истинные и ложные выражения в языке С */
#include <stdio.h>
int main ( void)
{
    int true_val, false_val;
    true_val = (10 > 2 ) ;                                                      /* знач ение истинного о тношения */
    false_val = (10 == 2 ) ;                                                    /* знач ения ложного отношения */
    printf ("true = %d; false = %d\n", true_val, false_val);
    return 0; 
}