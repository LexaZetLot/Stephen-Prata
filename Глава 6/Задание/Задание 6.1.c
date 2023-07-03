#include <stdio.h>

int const SIZE = 26;

int main (void)
{
    char arr[SIZE], abc = 'a';
    int index;
    
    for (index = 0; index < SIZE; index++)
        arr[index] = abc++;
    
    for (index = 0; index < SIZE; index++)
        printf ("%c ", arr[index]);
    
    return 0;
}