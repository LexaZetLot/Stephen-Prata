#include <stdio.h>

int main (void) 
{
    float A;
    
    printf ("Введите значение с плавающей запятой: ");
    scanf ("%f", &A);
    printf ("Запись с фиксированной запятой: %f\n", A);
    printf ("Экспоненциальная форма записи: %e\n", A);
    printf ("Экспоненциальная форма записи: %a\n", A);
    
    return 0;
}