/*fundsl.c -- nередача элементов структуры в качестве аргументов*/

#include <stdio.h> 

#define FUNDLEN 50

struct funds 
{ 
    char bank [FUNDLEN];
    double bankfund;
    char save [FUNDLEN];
    double savefund;
};

double sum (double, double);

int main (void)
{
    struct funds stan =
    {
        "Garlic-Melon Bank",
        3024.72,
        "Lucky's Savings and Loan", 
        9237.11
    };
    
    printf ("Cyммa на счету у Стэна составля ет $%.2f.\n", sum (stan.bankfund, stan.savefund));
    
    return 0;
}

/*суммирование двух чисел типа double*/
double sum (double x, double у)
{
    return (x + у); 
}