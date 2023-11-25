#include <stdio.h>

int main ( void)
{
    int const KM = 1.609;
    int const LITR = 3.785;
    
    float galon, mili;
    
    printf ("Видите галоны и пройденые мили: ");
    scanf ("%f %f", &galon, &mili);
    printf ("Миль на галоне: %f\n", mili / galon);
    printf ("Расход на 100км: %f\n", (((galon * LITR) / (KM * mili))   * 100));
    
    
    return 0;
}