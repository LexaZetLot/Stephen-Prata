/#include <stdio.h>

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
    printf ("Ваша почасовая ставка:\n");
    printf ("a) 8.75$                                                   b) 9.33$\n");
    printf ("c) 10.00$                                                  d) 11.20$\n");
    printf ("e) Выход\n");
    printf ("******************************************************************************\n");
    
    
    
    
    while (scanf("%c", &vibor) == 1 )
    {
        switch (vibor)
        {
            case 'a':
                stavca = 8.75f;
                break;
            case 'b':
                stavca = 9.33f;
                break;
            case 'c':
                stavca = 10.00f;
                break;
            case 'd':
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