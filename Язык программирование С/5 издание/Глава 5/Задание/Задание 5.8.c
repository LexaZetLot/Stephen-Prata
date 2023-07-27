/* addemup.c -- четыре вида операторов */
#include <stdio.h>

void temp (float n);

int main(void)                                                                  
{       
    float da;
    scanf("%f", &da);
    temp (da);
    return 0;
}

void temp (float n){
    
    printf ("%f %f",(n - 32) / 1.8f,((n - 32) / 1.8f)+273.16);   
}