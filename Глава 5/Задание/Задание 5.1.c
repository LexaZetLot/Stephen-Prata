#include <stdio.h>
int const MIN_CHAS = 60;
int main ( void)
{
    
    int chas, min, time;
    
    printf ("Введите минуты: \n");
    scanf ("%d", &time);
    
    while (time > 0)
    {
        chas = time / MIN_CHAS;
        min = time % MIN_CHAS;
        printf ("%d час(ов), %d минут\n", chas, min);
        
        printf ("Введите минуты: \n");
        scanf ("%d", &time);
    }
    
    return 0; 
}