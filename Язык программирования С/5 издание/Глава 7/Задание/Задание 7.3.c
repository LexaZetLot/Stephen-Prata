#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int hisl, prover, col_chet = 0, sum = 0, not_chet = 0;
    
    while (scanf ("%d", &hisl) == 1)
    {
        
        prover = hisl % 2;
        
        switch(prover)
        {
            case 0: 
                col_chet++;
                sum += hisl;
                break;
            default: 
                not_chet++;
        }
    } 
    printf ("Колличество четных = %d, Колличество не четных = %d, средняя сумма четных = %d", col_chet, not_chet, sum / col_chet);
    return 0;
}