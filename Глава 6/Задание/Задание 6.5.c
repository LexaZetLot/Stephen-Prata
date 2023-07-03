#include <stdio.h>

int kvad (int hislo);
int kub (int hislo);

int main (void)
{
    int i, min, max, ku, kv;
    
    printf ("Введите значения min и max через пробел: ");
    scanf ("%d %d", &min, &max);
    printf ("Число      Квадрат     Куб\n");
    
    for (i = min; i <=max; i++)
    {
        kv = kvad (i);
        ku = kub (i);
        
        printf ("%3d%12d%10d\n", i, kv, ku);
    }
    
    
    return 0;
}

int kvad (int hislo)
{   
    int voz;
    
    voz = hislo *= hislo;
    
    return voz;
}

int kub (int hislo)
{
    int voz;
    
    voz = hislo *= hislo * hislo;
    
    return voz;
}