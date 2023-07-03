#include <stdio.h>
#include "functions.h"

int main (void)
{
    int day, year;
    char month [MAX_SIZE_MOUNTH]; 
    puts ("Введите день месяц и год через пробел");
    scanf ("%d %s %d", &day, month, &year);
    
    printf ("%d", days_have_passed (day, month));
    
    
    
    return 0;
}