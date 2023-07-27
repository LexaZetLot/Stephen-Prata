/* skippart.с -- использует оператор continue, чтобы пропустить часть цикла */

#include <stdio.h>

int main (void)
{
    const float МIN = 0.0f;
    const float МАХ = 100.0f;
    
    float score;
    float total = 0.0f;
    int n = 0;
    float min = МАХ;
    float max = МIN;
    
    printf ("Bвeдитe результат первой игры (или q для завершения): ");
    
    while (scanf ( "%f", &score) == 1)
    {
        if (score < МIN || score > МАХ)
        {
            printf ("%0.lf - недопустимое значение. Повторите попытку: ", score);
            continue ;  
        }
        
        printf ("Воспринято %0.lf:\n" , score);
        
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score; 
        n++;
        
        printf ("Введите результат следующей игры (или q для завершения): "); 
    }
    
    if (n > 0)
    {
        printf ("Cpeднee значение %d результатов равно %0.lf.\n ", n, total / n );
        printf ("Минимальное %0.lf, максимальное %0.lf\n", min, max);
    }
    else
        printf ("Допустимые результаты игр не введены.\n"); 
    return 0;
}