#include <stdio.h>

#define PERERABOTKA 40
#define NAL_PERERABORKS 1.5f
#define BAS_PLATA 10
#define BAS_NAL 300
#define BAS_NAL1 150
#define NALOG1 20
#define NALOG2 15
#define NALOG3 5

int main (void)
{
    char vibor;
    float chas, stavca;
    
    printf ("******************************************************************************\n");
    printf ("Выберите операцию:\n");
    printf ("a) Сложение                                                b) Вычетиние\n");
    printf ("c) Умножение                                               d) Деление\n");
    printf ("e) Выход\n");
    printf ("******************************************************************************\n");
    
    
    
    
    while ((vibor = getchar ()) != 'e')
    {
        switch (vibor)
        {
            case 'a':
                printf ("Ввидите два числа через пробел: ");
                scanf ("%f %f", &chas, &stavca);
                printf ("Результат равен %.2f", chas + stavca);
                continue;
            case 'b':
                printf ("Ввидите два числа через пробел: ");
                scanf ("%f %f", &chas, &stavca);
                printf ("Результат равен %.2f", chas - stavca);
                continue;
            case 'c':
                printf ("Ввидите два числа через пробел: ");
                scanf ("%f %f", &chas, &stavca);
                printf ("Результат равен %.2f", chas * stavca);
                continue;
            case 'd':
                printf ("Ввидите два числа через пробел: ");
                scanf ("%f %f", &chas, &stavca);
                printf ("Результат равен %.2f", chas / stavca);
                continue;
            default:
                //goto metka1;
                continue;
        }
        
    }
    metka1: printf ("Конец программы"); 
    
    return 0;
}