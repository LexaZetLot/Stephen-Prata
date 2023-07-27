#include <stdio.h>
float const FT_V_SM = 30.48f;
float const FU_V_SM = 2.54f;

int main (void)
{
    int dyum;
    float sm, fut;  
    
    printf ("Введите сантиметры: ");
    scanf ("%f", &sm);
    while (sm > 0)
    {
        dyum = sm / FT_V_SM;
        fut = (sm - (dyum * FT_V_SM)) / FU_V_SM;
        printf ("sm = %f = %d dyum и %.2f футов", sm, dyum, fut);
        
        printf ("Введите сантиметры: ");
        scanf ("%f", &sm);
    }
    
    return 0; 
}