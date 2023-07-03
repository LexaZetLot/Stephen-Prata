#include <stdio.h>

int main (void)
{
    int n, i;
    int f; 
    
    printf("Введите число\n");
    
    for (scanf ("%d", &n) == 1; n>1; n--)
    {
        for (i=n-1, f = 0; n > 1 && i > 1; i--)
        {
            if (n % i == 0)
                f = 1;
        }
        if (f != 1)
            printf("%d ", n);
    }
    getchar();
    
    return 0;
}