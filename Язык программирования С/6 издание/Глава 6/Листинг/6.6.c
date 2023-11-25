/*tапdf.c -- истинные и ложные значения в языке С*/

#include <stdio.h>

int main ( void)
{
    int true_val, false_val;
    
    true_val = (10 > 2 );                                                       //значение истинного о тношения
    false_val = (10 == 2);                                                      //значения ложного отношения
    
    printf ("true = %d; false = %d\n", true_val, false_val);
    
    return 0; 
}