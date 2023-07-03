#include <stdio.h>

#define PERERABOTKA 40
#define NAL_PERERABORKS 15
#define BAS_PLATA 10
#define BAS_NAL 300
#define BAS_NAL1 150
#define NALOG1 20
#define NALOG2 15
#define NALOG3 5

int main (void)
{
    float chas;
    
    while (scanf ("%f", &chas) == 1)
    {
        if ((chas <= PERERABOTKA) && ((chas * BAS_PLATA) <= BAS_NAL))
            printf ("Ваш заработок равен: %.2f", (chas * BAS_PLATA) - ((chas * BAS_PLATA) * 0.2f));
        else if ((chas <= PERERABOTKA) && ((chas * BAS_PLATA) <= (BAS_NAL + BAS_NAL1)))
            printf ("Ваш заработок равен: %.2f", (chas * BAS_PLATA) - (BAS_NAL * 0.2f) - (((chas * BAS_PLATA) - BAS_NAL) * 0.15f));
        else if ((chas <= PERERABOTKA) && ((chas * BAS_PLATA) > (BAS_NAL + BAS_NAL1)))
            printf ("Ваш заработок равен: %.2f", (chas * BAS_PLATA) - (BAS_NAL * 0.2f) - (((chas * BAS_PLATA) - BAS_NAL) * 0.15f) - (((chas * BAS_PLATA) - (BAS_NAL + BAS_NAL1)) * 0.05f));
        else if ((chas > PERERABOTKA) && ((chas * BAS_PLATA) <= BAS_NAL))
            printf ("Ваш заработок равен: %.2f", (((chas - PERERABOTKA) * NAL_PERERABORKS) + (PERERABOTKA * BAS_PLATA)) - ((chas * BAS_PLATA) * 0.2f));
        else if ((chas > PERERABOTKA) && ((chas * BAS_PLATA) <= (BAS_NAL + BAS_NAL1)))
            printf ("Ваш заработок равен: %.2f", (((chas - PERERABOTKA) * NAL_PERERABORKS) + (PERERABOTKA * BAS_PLATA)) - (BAS_NAL * 0.2f) - (((chas * BAS_PLATA) - BAS_NAL) * 0.15f));
        else if ((chas > PERERABOTKA) && ((chas * BAS_PLATA) > (BAS_NAL + BAS_NAL1)))
            printf ("Ваш заработок равен: %.2f", (((chas - PERERABOTKA) * NAL_PERERABORKS) + (PERERABOTKA * BAS_PLATA)) - (BAS_NAL * 0.2f) - (((chas * BAS_PLATA) - BAS_NAL) * 0.15f) - (((chas * BAS_PLATA) - (BAS_NAL + BAS_NAL1)) * 0.05f));
    }

}