/*соруЗ.с -- демонстрация использования strncpy() */

#include <stdio.h>
#include <string.h>                                                             /*объявление strncpy ()*/ 

#define SIZE 40
#define TARGSIZE 7
#define LIM 5

char * s_gets (char * st, int n);

int main (void)
{
    char qwords [LIM][TARGSIZE];
    char temp [SIZE];
    int i = 0;
    
    printf ("Введите %d слов, которые начинаются с буквы q:\n", LIM);
    while (i < LIM && s_gets (temp, SIZE))
    {
        if (temp[0] != 'q') 
            printf ("%s не начинается с буквы q! \n", temp); 
        else
        {
            strncpy (qwords [i], temp, TARGSIZE - 1);
            qwords [i][TARGSIZE - 1] = '\0';
            i++; 
        }
    }
    puts ("Список принятых слов:");
    for (i = 0; i < LIM; i++)
        puts (qwords [i]);
    
    return 0;
}

char * s_gets (char * st, int n)
{
    char * ret_val;
    int i = 0;
    
    ret_val = fgets (st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0') 
            i++;
        if (st [i] == '\n')
            st [i] = '\0';
        else                                                                     //требуется наличие words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}