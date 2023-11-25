#include <stdio.h>

#define DOHOD1 17850
#define DOHOD2 23900
#define DOHOD3 29750
#define DOHOD4 14875
#define NALOG1 0.15f 
#define NALOG2 0.28f

int main (void)
{
    int vibor;
    float dohod;
    int flag;
    
    printf ("******************************************************************************\n");
    printf ("Ваша почасовая ставка:\n");
    printf ("1) Одинокий                                                2) Глава семьи\n");
    printf ("3) Состоит в браке, совме-                                 4) Состоит в браке, раздель-\n");
    printf ("   стное ведение хозяйства                                    ное ведение хозяйства \n");
    printf ("5) Выход\n");
    printf ("******************************************************************************\n");
    
    
    
    
    while (scanf("%d", &vibor) == 1 && vibor <=5 && vibor >= 1)
    {
        switch (vibor)
        {
            case 1:
                flag = 1;
                break;
            case 2:
                flag = 2;
                break;
            case 3:
                flag = 3;
                break;
            case 4:
                flag = 4;
                break;
            default:
                goto metka1;
        }
        printf ("Сумма до вычета налога: ");
        while (scanf ("%f", &dohod) == 1)
        {
            if (flag == 1 && dohod <= DOHOD1)
                printf ("Ваш доход: %.2f",dohod - (dohod * NALOG1));
            else if (flag == 1 && dohod > DOHOD1)
                printf ("Ваш доход: %.2f",(DOHOD1 - (DOHOD1 * NALOG1)) + ((dohod - DOHOD1) - ((dohod - DOHOD1) * NALOG2)));
            else if (flag == 2 && dohod <= DOHOD2)
                printf ("Ваш доход: %.2f",dohod - (dohod * NALOG1));
            else if (flag == 2 && dohod > DOHOD2)
                printf ("Ваш доход: %.2f",(DOHOD2 - (DOHOD2 * NALOG1)) + ((dohod - DOHOD2) - ((dohod - DOHOD2) * NALOG2)));
            else if (flag == 3 && dohod <= DOHOD3)
                printf ("Ваш доход: %.2f",dohod - (dohod * NALOG1));
            else if (flag == 3 && dohod > DOHOD3)
                printf ("Ваш доход: %.2f",(DOHOD3 - (DOHOD3 * NALOG1)) + ((dohod - DOHOD3) - ((dohod - DOHOD3) * NALOG2)));
            else if (flag == 4 && dohod <= DOHOD4)
                printf ("Ваш доход: %.2f",dohod - (dohod * NALOG1));
            else if (flag == 4 && dohod > DOHOD4)
                printf ("Ваш доход: %.2f",(DOHOD4 - (DOHOD4 * NALOG1)) + ((dohod - DOHOD4) - ((dohod - DOHOD4) * NALOG2)));
        }
    }
    metka1: printf ("Конец программы"); 
    
    return 0;
}