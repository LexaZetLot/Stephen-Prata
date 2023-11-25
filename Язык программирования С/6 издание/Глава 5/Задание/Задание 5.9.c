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
    
    printf ("%.2f %.2f", (n - 32) * 5.0f / 9.0f, ((n - 32) * 5.0f / 9.0f) + 273.16);   
}