#include <stdio.h>
#include <string.h>

int const SIZE = 256;

int main (void)
{
    int i ,j;
    char arr[SIZE];
    
    for (i = 0; scanf("%c", &arr[i]) == 1 && arr[i] != '\n'; i++);
    arr[i] = '\0';
    for (i = strlen(arr) - 1; i >= 0; i--)
        printf ("%c", arr[i]);
    
    
    return 0;
}