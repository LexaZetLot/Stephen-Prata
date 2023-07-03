#include <stdio.h>

#define ARTIHON 1.25f
#define CVEKLA 0.65f
#define MORKOVI 0.89f
#define SUMM_SKID 100
#define SKID 0.05f
#define DOST1 3.50f
#define DOST2 10.00f
#define DOST3 8.00f
#define ZA_FUNT 0.10f
#define VES_DOST1 5
#define VES_DOST2 20

int main (void)
{
    
    int flag;
    float ves_mor, ves_art, ves_cve, cen_art = 0, cen_cve = 0, cen_mor = 0, sum_ves, sum_cen, dost;
    
    
    while(1)
    {
        printf ("*************************************************************************************************\n");
        printf ("Ваша заказ:\n");
        printf ("1) Артишон 1.25$                                           2) Свекла 0.65$\n");
        printf ("3) Морковка 0.89$                                          4) Выход\n");
        printf ("*************************************************************************************************\n");
        
        while (scanf ("%d", &flag) == 1)
        {
            switch (flag)
            {
                case 1:
                    printf ("Введите вес Артишона: ");
                    scanf ("%f", &ves_art);
                    cen_art = ARTIHON * ves_art;
                    break;
                case 2:
                    printf ("Введите вес Свеклы: ");
                    scanf ("%f", &ves_cve);
                    cen_cve = CVEKLA * ves_cve;
                    break;
                case 3:
                    printf ("Введите вес Морковка: ");
                    scanf ("%f", &ves_mor);
                    cen_mor = MORKOVI * ves_mor;
                    break;
                default:
                    goto metka1;
            }
            
            sum_ves = ves_mor + ves_cve + ves_art;
            
            if ((sum_cen = (cen_mor + cen_cve + cen_art)) > SUMM_SKID)
                sum_cen -= SKID * sum_cen;
                
                
                
            if (sum_ves <= VES_DOST1)
                sum_cen += DOST1;
            else if ((sum_ves > VES_DOST1) && (sum_ves < VES_DOST2))
                sum_cen += DOST2;
            else if (sum_ves >= VES_DOST2)
                sum_cen += DOST3 + (((int)(sum_ves - VES_DOST2)) * ZA_FUNT) ;
            
            
        printf ("\n\n\n\n\n\n");    
        printf ("*************************************************************************************************\n");
        printf ("Ваша заказ:\n");
        printf ("1) Артишон 1.25$                                           2) Свекла 0.65$\n");
        printf ("3) Морковка 0.89$                                          4) Выход\n");
        printf ("*************************************************************************************************\n");
            
        }
    }
    metka1: printf ("Итоговая цена: %f", sum_cen); 
    
    return 0;
}