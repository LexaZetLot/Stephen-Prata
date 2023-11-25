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
    int vibor;
    float chas, stavca;
    
    printf ("******************************************************************************\n");
    printf ("Ваша почасовая ставка:\n");
    printf ("1) 8.75$                                                   2) 9.33$\n");
    printf ("3) 10.00$                                                  4) 11.20$\n");
    printf ("5) Выход\n");
    printf ("******************************************************************************\n");
    
    
    
    
    while (scanf("%d", &vibor) == 1 && vibor <=5 && vibor >= 1)
    {
        switch (vibor)
        {
            case 1:
                stavca = 8.75f;
                break;
            case 2:
                stavca = 9.33f;
                break;
            case 3:
                stavca = 10.00f;
                break;
            case 4:
                stavca = 11.20f;
                break;
            default:
                goto metka1;
        }
        printf ("Введите колличество часов: ");
        while (scanf ("%f", &chas) == 1)
        {
            if ((chas <= PERERABOTKA) && ((chas * stavca) <= BAS_NAL))
                printf ("Ваш заработок равен: %.2f", (chas * stavca) - ((chas * stavca) * 0.2f));
            else if ((chas <= PERERABOTKA) && ((chas * stavca) <= (BAS_NAL + BAS_NAL1)))
                printf ("Ваш заработок равен: %.2f", (chas * stavca) - (BAS_NAL * 0.2f) - (((chas * stavca) - BAS_NAL) * 0.15f));
            else if ((chas <= PERERABOTKA) && ((chas * stavca) > (BAS_NAL + BAS_NAL1)))
                printf ("Ваш заработок равен: %.2f", (chas * stavca) - (BAS_NAL * 0.2f) - (((chas * stavca) - BAS_NAL) * 0.15f) - (((chas * stavca) - (BAS_NAL + BAS_NAL1)) * 0.05f));
            else if ((chas > PERERABOTKA) && ((chas * stavca) <= BAS_NAL))
                printf ("Ваш заработок равен: %.2f", (((chas - PERERABOTKA) * NAL_PERERABORKS * stavca) + (PERERABOTKA * stavca)) - ((chas * stavca) * 0.2f));
            else if ((chas > PERERABOTKA) && ((chas * stavca) <= (BAS_NAL + BAS_NAL1)))
                printf ("Ваш заработок равен: %.2f", (((chas - PERERABOTKA) * NAL_PERERABORKS * stavca) + (PERERABOTKA * stavca) - (BAS_NAL * 0.2f) - (((chas * stavca) - BAS_NAL) * 0.15f)));
            else if ((chas > PERERABOTKA) && ((chas * stavca) > (BAS_NAL + BAS_NAL1)))
                printf ("Ваш заработок равен: %.2f", (((chas - PERERABOTKA) * NAL_PERERABORKS * stavca) + (PERERABOTKA * stavca)) - (BAS_NAL * 0.2f) - (((chas * stavca) - BAS_NAL) * 0.15f) - (((chas * stavca) - (BAS_NAL + BAS_NAL1)) * 0.05f));
        }
    }
    metka1: printf ("Конец программы"); 
    
    return 0;
}