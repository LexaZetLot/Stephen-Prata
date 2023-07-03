/* addemup.c -- четыре вида операторов */
#include <stdio.h>

int main(void)                                                                  /* находит сумму п ервых 20 на тураль ных чисел */
{       
    int count , sum;                                                            /* оператор объявл ения                         */
    count = 0;                                                                  /* оператор присваивания                        */
    sum = 0;                                                                    /* то же самое                                  */
    while ( count++ < 20)                                                       /* оператор цикла while                         */
        sum = sum + count;                                                      /* операторы                                    */
    printf ("sum = %d\n", sum);                                                 /* опер атор вызова функции                     */ 
    return 0;
}