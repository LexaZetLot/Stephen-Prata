#include <stdio.h>

int main (void)
{
    float dafna = 100.0f, deydra = 100.0f;
    int year = 0;
    
    
    dafna += 0.1f * 100.0f;
    deydra += 0.05f * deydra;
    year++;
    while (dafna > deydra)
    {
        dafna += 0.1f * 100.0f;
        deydra += 0.05f * deydra;
        year++;
    }
    
    printf ("Колличество лет %d\n", year);
    printf ("Дафна %f, Дейдера %f", dafna, deydra);
    return 0; 
}