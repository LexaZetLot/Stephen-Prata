#include <stdio.h>

int main (void) 
{
    short A;
    
    printf ("Введите свой рост в дюймах: ");
    scanf ("%hd", &A);
    printf ("%.2f\n", A * 2.54f);
    
    return 0;
}