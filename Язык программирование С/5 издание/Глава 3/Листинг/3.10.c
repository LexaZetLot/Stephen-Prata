/*escape.c - использование символов управляющих последов ательностей */  

#include <stdio.h>

int main (void)
{
    float salary; 
    
    printf ("\aBвeдитe предпочитаемую вами сумму месячного жалования: ");       /*1*/
    printf (" $____\b\b\b\b\b\b\b");                                            /*2*/
    scanf ("%f", &salary);
    printf ("\n\t$%.2f в месяц соответствует $%.2f в год.", salary, salary * 12.0); /*3*/
    printf ("\Oгo!\n");                                                         /*4*/ 

    return 0; 
}