#include <stdio.h>
#include "functions.h"

int main (void)
{
    int arr [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search = 31;
    
    printf ("%d", binar_search (arr, SIZE, search));
    
    
    return 0;
}