//factor.c -- использует циклы и рекурсию для вычисления факториала

#include <stdio.h> 

long fact (int n);
long rfact (int n); 

int main (void)
{
    
    int num;
    
    printf ("Этa программа вычисляет факториалы.\n");
    printf ("Bвeдитe значение в диапазоне 0-12 (или q для завершения программы):\n");
    
    while (scanf ("%d", &num) == 1) 
    {
        
        if (num < 0)
            printf ("Пожалуйста, не вводите отрица тельные числа.\n");
        else if (num > 12)
            printf ("Bxoднoe значение должно быть меньше 13.\n");
        else
        {
            
            printf ("цикл: факториал %d = %ld\n", num, fact (num));
            printf ("peкypcия: факториал %d = %ld\n", num, rfact (num));
            
        }
        
        printf ("Bвeдитe значение в диапазоне 0-12 (или q для завершения программы): \n"); 
        
    }
    
    printf ("Bceгo хорошего.\n");
    
    return 0;
    
}

long fact (int n)                                                               // функция на базе цикла 
{
    
    long ans;
    
    for (ans = 1; n > 1; n--)
        ans *= n; 
    
    return ans; 
    
}


long rfact (int n)                                                              // рекурсивная версия
{
    
    long ans; 
    
    if (n > 0)
        ans = n * rfact (n - 1);
    else 
        ans = 1; 
    
    return ans; 
    
}