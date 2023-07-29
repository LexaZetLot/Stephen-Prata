//power.c -- возводит числа в целые степени

#include <stdio.h>

double power ( double n, int р);                                                //прототип ANSI 

int main (void)
{
    double x, xpow;
    int exp;
    
    printf ("Bвeдитe число и положительную целую степень,");
    printf ("в которую\nчисло будет возведено. Для завершения программы ");
    printf ("введите q.\n");
    
    while (scanf ("%lf%d", &x, &exp) == 2)
    {
        xpow = power (x, exp);                                                  //вызов функции
        printf ("%.3g в с тепени %d равно %.5g\n", x, exp, xpow);
        printf ("Введите следующую пару чисел или q для завершения.\n");
    }
    
    printf ("Haдeeмcя, вас удовлетворило качество программы - до свидания!\n");
    
    return 0; 
}

double power ( double n, int р)                                                 //определение функции
{
    double pow = 1;
    int i; 
    
    for (i = 1; i <= р; i++)
        pow *= n;
        
    return pow;                                                                 //возвратить значения pow 
    
}