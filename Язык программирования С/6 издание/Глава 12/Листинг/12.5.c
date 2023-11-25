//parta.c -- разнообразные классы хранения
//компилировать вместе с partb.c 

#include <stdio.h>

void report_count (void);
void accumulate (int k);

int count = 0;                                                                  //область видимости в пределах файла, внешнее связывание

int main (void)
{
    int value;                                                                  //автоматическая переменная
    register int i;                                                             //регистровая переменная
    
    printf ("Введите положительное целое число (0 для завершения): ");
    while (scanf ("%d", &value ) == 1 && value > 0)
    {
        ++count;                                                                //использование переменной с областью видимости в пределах файла
        for (i = value; i >= 0; i--)
            accumulate (i);
        printf ("Введите положительное целое число (0 для выхода из программы): ");
    }
    report_count ();
    
    return 0;
}

void report_count (void)
{
    printf ("Цикл выполнен %d раз\n", count);
}