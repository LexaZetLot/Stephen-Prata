//min_sec.c - - переводит секунды в минуты и секунды
#include <stdio.h>
#define SEC_PER_MIN 60                                                          // число секунд в минуты

int main(void)
{
    int sec, min, left;
    
    printf ("Пepeвoд секунд в минуты и секунды!\n") ;
    printf ("Bвeдитe количество секунд (<= 0 для выхода):\n");
    scanf ("%d", &sec);                                                         // читать количество секунд
    
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN ;                                               // усеченное колич е ство минут
        left = sec % SEC_PER_MIN;                                               // число колич ество в ост атке
        printf ("%d секунд - это %d минут %d секунд.\n", sec, min, left);
        printf ("Bвeдитe следующе е знач ение (<= 0 для выхода):\n");
        scanf ("%d" , &sec);
    }
    
    printf ("Cдeлaнo!\n"); 
    
    return 0;
}