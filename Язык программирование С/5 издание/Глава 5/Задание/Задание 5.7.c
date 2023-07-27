/* addemup.c -- четыре вида операторов */
#include <stdio.h>

void kub (float n);

int main(void)                                                                  
{       
    float da;
    scanf("%f", &da);
    kub (da);
    return 0;
}

void kub (float n){
    n = n * n *n;
    printf ("%f",n);   
}