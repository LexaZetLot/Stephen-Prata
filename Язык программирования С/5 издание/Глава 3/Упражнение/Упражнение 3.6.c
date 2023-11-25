#include <stdio.h>

int main (void) 
{
    int A;
    
    printf ("Введите объем воды: ");
    scanf ("%d", &A);
    printf ("%e\n", A * 3.0e-23);
    
    return 0;
}