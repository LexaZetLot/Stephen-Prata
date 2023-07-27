#include <stdio.h>

int main (void)
{
    int ch, min = 0, max = 100, i, ii = 0;
    
    printf ("Загайте число от 0 до 100 \n");
    min = ((min + max) / 2);
    printf ("Ваше число больше %d", min);
    
    
    while ((ch = getchar ()) != EOF)
    {
        switch (ch)
        {
            case 'y':
                min = (min + max) / 2;
                printf ("Ваше число больше %d", min);
                break;
            case 'n':
                ii = min;
                min = (max - min) / 2;
                max = ii;
                printf ("Ваше число больше %d", min);
                break;
            default:
                printf ("Я угадал");
                break;
        }
        if (ch = 'n')
        {
            max = min;
            min -= 25;
        }
        
        
        for (i = min; i <= max && ch == 'n'; i++)
        {
            printf("Ваше число %d", i);
            scanf("%lc", &ch);
            while ((ch = getchar ()) != '\n')
             continue;
        }
        printf ("Я угадал");
    }
    
    
    return 0;
}