#include <stdio.h>
#define TEN 'g'
int main ( void)
{
    char n = 'a' - 1; 
    while (n++ < TEN)
    printf ("%5c" , n ) ;
    printf ( "\n") ;
    return 0; 
}