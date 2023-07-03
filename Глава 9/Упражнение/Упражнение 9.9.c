#include <stdio.h>

void menu (void);
void vivod (int a);
void vvod (int * a);

int main (int a )
{
    
    while (1)
    {
    
    menu ();
    
    vvod (&a);
    
    if (a >= 1 && a <= 4)
        vivod (a);
    else;
       
    }
    
    
    return 0;
    
}

void menu (void)
{
    
    printf ("Выберете один из следующих вариантов:\n");
    printf ("1) коприровать файл               2) переместить файл\n");
    printf ("3) удалить файл                   4) выйти из программы\n");
    printf ("Введите номер выбраного варианта:\n");
    
}

void vivod (int a)
{
    
    printf ("%d \n", a);

}

void vvod (int * a)
{
    
    scanf ("%d", a);
    
}