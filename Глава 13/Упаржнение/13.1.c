#include <stdio.h>

int main (void)
{
    FILE * fp;
    int k;
    
    fp = fopen ("gelatin", "a+");
    
    for (k = 0; k < 30; k++)
        fputs ("Кто-то не особо умный поглощает желатин.", fp);
    
    fclose (fp);
    
    return 0;
}