/*r_drive1.c -- тестирование функций rand1 () и srand1 ()*/
/*компилировать вместе с sand_r.c*/

#include <stdio.h>

extern void srand1 (unsigned int х);
extern int rand1 (void);

int main (void)
{
    int count;
    unsigned seed;
    
    printf ("Введите желаемое начальное число.\n");
    
    while (scanf ("%u", &seed) == 1)
    {
        srand1 (seed);                                                          /*переустановка начального числа*/
        for (count = 0; count < 5; count++)
            printf ("%hd\n", rand1 ()); 
        
        printf ("Введите следующее начальное число (или q для завершения):\n");
    }
    printf ("Пpoгpaммa завершена.\n");
    
    return 0; 
}