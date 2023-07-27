#include <stdio.h>

int main (void) // Эта программа не содержит ошибок //
{
    int cows, legs;
    
    printf ("Cкoлькo коровьих ног вы насчитали?\n");
    scanf ("%d", &legs);
    
    cows = legs / 4;
    
    printf ("Отсюда следует, что имеется %d коров.\n", cows);
    
    return 0;
}