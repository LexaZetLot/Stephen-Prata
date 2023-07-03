/* electric.c -- подсчитывает сумму для счета за электроэнергию */
#include <stdio.h>
#define RATE1 0.12589                                                           /* тариф за первые 3 60 кВт/ч */
#define RATE2 0.17901                                                           /* тариф за следующие 320 кВт/ч */
#define RATE3 0.20971                                                           /* тариф, когда расход превышает 680 кВт/ч */
#define BREAK1 360.0                                                            /* первая точка разрыва тарифов */
#define BREAK2 680.0                                                            /* вторая точка разрыва тарифов */
#define BASE1 ( RATE1 * BREAK1)                                                 /* стоимость 3 0 кВ т/ч */
#define BASE2 ( BASE1 + ( RATE2 * ( BREAK2 - BREAK1)))                          /* стоимость 680 кВ т/ч */

int main ( void)
{
    double kwh;                                                                 /* израсходованные киловатт-часы */
    double Ьill;                                                                /* сумма к оплате */
    printf ("Bвeдитe колич е ствоизра сходов анной электроэнергии в кВт/ч .\n") ;
    scanf ("%lf", &kwh);                                                        /* %lf для типа double */
    if (kwh <= BREAK1)
        Ьill = RATE1 * kwh;
    else if (kwh <= BREAK2 )                                                    /*колич ество кВт/ч в промежутке от 360 до 680 */
        Ьill = BASE1 + (RATE2 *  (kwh - BREAK1));                               /*колич ество кВ т/ч превьШJает 680 */
    else 
    Ьill = BASE2 + ( RATE3 * (kwh - BREAK2));
    
    printf ("Cyммa к опл ате за %.lf кВт/ч составля ет $%1.2f.\n ", kwh , Ьill);
    
    return 0;
}