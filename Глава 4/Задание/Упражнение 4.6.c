#include <stdio.h>
#include <float.h>

int main ( void)
{
    double A = 1.0 / 3.0;
    float B = 1.0f / 3.0f;
    
    printf ("Вывод double с 4 цифрами %.4lf, c 8 цифрами %.8lf, c 16 цифрами %.16lf\n", A, A, A);
    printf ("Вывод float с 4 цифрами %.4f, c 8 цифрами %.8f, c 16 цифрами %.16f\n", B, B, B);
    printf ("Вывод данных с заголовочного фыйла %d %d", FLT_DIG, DBL_DIG);
    
    return 0;
}