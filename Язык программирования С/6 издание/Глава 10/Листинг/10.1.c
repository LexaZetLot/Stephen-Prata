/*day_monl.c -- выводит количество дней в каждом месяце*/

#include <stdio.h>

#define MONTHS 12 

int main (void)
{
    
    int days [MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    
    for (index = 0; index < MONTHS; index++)
        printf ("Mecяц %d имеет %2d день (дней).\n", index + 1, days [index]);
    
    return 0;
    
}