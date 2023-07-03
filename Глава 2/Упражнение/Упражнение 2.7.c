#include <stdio.h>

int one_three (void);
int two (void);

int main (void)
{

    printf("начать сейчас:\n");
    one_three ();
    printf("порядок!\n");
    
    return 0;
}

int one_three (void)
{
    printf("один\n");
    two ();
    printf("три\n");
}

int two (void)
{
    printf("два\n");
}