/*while2.c -- nравильно расставляйте точки с запятой*/

#include <stdio.h>

int main (void)
{
    int n = 0;
    
    while (n++ < 3 );                                                           /* с трока 7 */
        printf ("n рвно %d\n", n);                                              /* с трока 8 */
    
    printf ("Этo все, что может сделать данная программа . \n");
    
    return 0;
}