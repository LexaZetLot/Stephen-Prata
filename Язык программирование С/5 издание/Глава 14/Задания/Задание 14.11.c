#include <stdio.h>
#include <math.h>

void transform (double * source, double * target, int size, double (* p) (double));
double sum_2 (double a);
double ded_2 (double a);

int main (void)
{
    double arr_1 [10] = {11.0, 12.0, 13.0, 14.0, 15.0, 15.0, 14.0, 13.0, 12.0, 11.0};
    double arr_2 [10];
    
    transform (arr_1, arr_2, 10, sin);
    for (int i = 0; i < 10; i++)
        printf ("%lf\n", arr_2 [i]);
    printf ("*******************\n");
    transform (arr_1, arr_2, 10, cos);
    for (int i = 0; i < 10; i++)
        printf ("%lf\n", arr_2 [i]);
    printf ("*******************\n");
    transform (arr_1, arr_2, 10, sum_2);
    for (int i = 0; i < 10; i++)
        printf ("%lf\n", arr_2 [i]);
    printf ("*******************\n");
    transform (arr_1, arr_2, 10, ded_2);
    for (int i = 0; i < 10; i++)
        printf ("%lf\n", arr_2 [i]);
    printf ("*******************\n");
    return 0;
}

void transform (double * source, double * target, int size, double (* p) (double))
{
    for (int i = 0; i < size; i++)
        target [i] = (* p) (source [i]);
}

double sum_2 (double a)
{
    return a + 2;
}

double ded_2 (double a)
{
    return a - 2;
}