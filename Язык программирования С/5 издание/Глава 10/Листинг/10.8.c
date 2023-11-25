//pnt_add.c -- сложение указателей

#include <stdio.h>

#define SIZE 4 

int main (void) 
{
    
    short dates[SIZE];
    short * pti; 
    short index; 
    double bills [SIZE]; 
    double * ptf; 
    
    pti = dates;                                                                // на значение указателю адреса массива
    ptf = Ьills;
    
    printf ("%23s%10s\n", "short", "douЬle");
    
    for (index = 0; index < SIZE; index++)
        printf ("указатели + %d: %10p %10p\n", index, pti + index, ptf + index);
    
    return 0; 
    
}