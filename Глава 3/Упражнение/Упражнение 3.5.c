#include <stdio.h>

int main (void) 
{
    int A;
    
    printf ("Введите колличество лет: ");
    scanf ("%d", &A);
    printf ("%e\n", A * 3.156e7);
    
    return 0;
}