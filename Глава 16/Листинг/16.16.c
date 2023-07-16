/*assert.c -- использование макроса assert ()*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

int main (void)
{
    double х, у, z;
    
    puts ("Введите пару чисел (0 0 для выхода): ");
    while (scanf ("%lf%lf", &х, &у) == 2 && (х != 0 || у != 0 ))
    {
        z = х * х - у * у;                                                      /*должен быть +*/
        assert (z >= 0 );
        printf ("oтвeт: %f\n", sqrt (z));
        puts ("Следующая пара чисел: ");
    }
    puts ("Программа завершена.");
    
    return 0; 
}