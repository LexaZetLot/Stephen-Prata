#include <stdio.h>

int main (void)
{
    
    int day;
    
    printf ("Введите колличество дней: \n");
    scanf ("%d", &day);
    
    while (day > 0)
    {
        printf ("%5d %5d \n", day / 7, day % 7);
        printf ("Введите колличество дней: \n");
        scanf ("%d", &day);
    }    
        
    return 0; 
}