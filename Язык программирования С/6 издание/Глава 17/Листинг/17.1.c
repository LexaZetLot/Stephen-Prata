/*filmsl.c -- использование массива структур*/

#include <stdio.h>
#include <string.h>

#define TSIZE 45                                                                /*размер массива для хранения названия*/
#define FMAX 5                                                                  /*максимальное количество названий фильмов*/

char * s_gets (char * st, int n);

struct film
{
    char title [TSIZE];
    int rating;
};

int main (void)
{
    struct film movies [FMAX];
    int i = 0;
    int j;
    
    puts ("Введите название первого фильма:");
    while (i < FMAX && s_gets (movies[i].title, TSIZE) != NULL && movies[i].title[0] != '\0')
    {
        puts ("Введите свое значение рейтинга <0-10>:");
        scanf ("%d", &movies[i++].rating);
        while (getchar () != '\n')
            continue ;
        puts ("Введите название следующего фильма (или пустую строку для прекращения ввода): "); 
    }
    
    if (i == 0)
        printf ("Дaнныe не введены.");
    else
        printf ("Список фильмов:\n");
    for (j = 0; j < i; j++)
        printf ("Фильм: %s Рейтинг: %d\n", movies[j].title, movies[j].rating);
    
    printf ("Пpoгpaммa завершена.\n");
    return 0;
}

char * s_gets (char * st, int n)
{
    char * ret_val;
    char * find;
    int i = 0;
    
    ret_val = fgets (st, n, stdin);
    if (ret_val)
    {
        find = strchr (st, '\n');                                               //поиск символа новой строки
        if (find)                                                               //если адрес не является NULL,
            * find = '\0';                                                      //поместить туда нулевой символ
        else
            while (getchar() != '\n')
                continue;                                                       //отбросить остаток строки
    }
    return ret_val;
}