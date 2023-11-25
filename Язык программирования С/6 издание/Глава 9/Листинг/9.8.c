/*binary.c -- выводит целые числа в двоичной форме*/

#include <stdio.h> 

void to_binary (unsigned long n); 

int main (void)
{
    unsigned long number;
    
    printf ("Bвeдитe целое число (q для завершения): \n");
    while (scanf ("%lu", &number) == 1)
    {
        
        printf ("Двоичный эквивалент:");
        to_binary (number);
        putchar ('\n');
        printf ("Bвeдитe целое число (q для завершения):\n");
        
    }
    
    printf ("Пpoгpaммa завершена.\n"); 
    
    return 0;
}

void to_binary (unsigned long n)                                                /*рекурсивная функция*/
{  
    int r; 
    
    r = n % 2;
    if (n >= 2)
        to_binary (n / 2);
    putchar ('0' + r);
    
    return;  
}