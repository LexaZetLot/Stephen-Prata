/*qsorter.c -- использование быстрой сортировки для упорядочения групп чисел */

#include <stdio.h>
#include <stdlib.h>

#define NUМ 40

void fillarray (double ar [], int n);
void showarray (const double ar [], int n);
int mycomp (const void * p1, const void * p2);

int main (void)
{
    double vals [NUМ];
    fillarray (vals, NUМ);
    puts ("Список случайных чисел:");
    showarray (vals, NUМ);
    qsort (vals, NUМ, sizeof (double), mycomp);
    puts ("\nСортированный список: ");
    showarray (vals, NUМ);
    return 0; 
}

void fillarray (double ar [], int n)
{
    
    int index;
    for (index = 0; index < n; index++)
        ar [index] = (double) rand () / ((double) rand () + 0.1);
}

void showarray (const double ar [], int n)
{
    int index;
    
    for (index = 0; index < n; index++)
    {
        printf ("%9.4f", ar [index]);
        if (index % 6 == 5)
            putchar ('\n');
    }
    if (index % 6 != 0)
        putchar ('\n');
}

/*сортировка по возрас танию*/
int mycomp (const void * p1, const void * p2)
{
    /*для доступа к значениям нужны указатели на тип double*/
    const double * a1 = (const double *) p1;
    const double * a2 = (const double *) p2;
    
    if (*a1 < * a2)
        return -1;
    else if (*a1 == *a2)
        return 0; 
    else
        return 1; 
}