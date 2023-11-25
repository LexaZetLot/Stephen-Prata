/*rand0.c -- генерация случайных чисел*/
/*используется переносимый алгоритм ANSIС*/
#include <stdio.h>

static unsigned long int next = 1;

int rand0 (void);

int main (void)
{
   printf ("%d", rand0 ()); 
    
    return 0;
}

int rand0 (void)
{
    /*магическая формула генерации псевдослучайных чисел*/
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}