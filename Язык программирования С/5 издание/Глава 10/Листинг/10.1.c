// day_monl.c -- выводит на печать количество дней каждого месяца 

#include <stdio.h>

#define MONTHS 12 

int main (void)
{
    
    int days [MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    
    for (index = 0; index < MONTHS; index++)
        printf ("Mecяц %d имеет %2d дней (день).\n", index + 1, days [index]);
    
    return 0;
    
}