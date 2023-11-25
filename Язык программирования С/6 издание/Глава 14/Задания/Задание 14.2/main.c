#include <stdio.h>
#include "functions.h"

int main (void)
{
    int day, year, flag = 0;
    char month [MAX_SIZE_MOUNTH]; 
    puts ("Введите день месяц и год через пробел");
    scanf ("%d %s %d", &day, month, &year);
    
    if (year % 4 == 0)
        flag = 1;

    printf ("%d", days_have_passed (day, month) + flag);
    
    
    
    return 0;
}