/* addemup.c -- четыре вида операторов */
#include <stdio.h>

int main(void)                                                                  
{       
    int count , sum, n;                                                            
    count = 0;                                                                  
    sum = 0; 
    printf ("Ввидите предел: ");
    scanf ("%d", &n);
    while (n > 0)
    {
        while ( count++ < n)                                                       
            sum = sum + count;                                                      
        printf ("sum = %d\n", sum);
        printf ("Ввидите предел: ");
        scanf ("%d", &n);
    }
    return 0;
}