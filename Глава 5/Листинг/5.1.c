/* shoesl.c -- преобразует размер обуви в дюймы */
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325 

int main(void)
{
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf ("Paзмep обуви (мужской)	длина ступни\n");
    printf ("%10.lf %20.2f дюймов\n", shoe, foot);
    return 0;
}