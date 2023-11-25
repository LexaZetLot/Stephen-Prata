/*filmsЗ.c -- использование связного списка в стиле ADT*/
/*компилировать вместе с list.c*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>                                                             /*прототип функции exit ()*/
#include "list.h"                                                               /*определение List, Item*/

void showmovies (Item item);
char * s_gets (char * st, int n);

int main (void)
{
    List movies;
    Item temp;
    
    /*инициализация*/
    InitializeList (&movies);
    if (ListisFull (&movies))
    {
        fprintf (stderr, "Доступная память отсутствует! Программа завершена.\n");
        exit (1);
    }
    
    /*сбор и сохранение информации*/
    puts ("Введите название первого фильма:");
    while (s_gets (temp.title, TSIZE) != NULL && temp.title [0] != '\0')
    {
        puts ("Введите свое значение рейтинга <0-10>:");
        scanf ("%d", &temp.rating);
        while ( getchar () != '\n')
            continue;
        if (AddItem (temp, &movies) == false)
        {
            fprintf (stderr, "Пpoблeмa с резервированием памяти\n");
            break;
        }
        if (ListisFull (&movies))
        {
            puts ("Список полон.");
            break;
        }
        puts ("Введите название следующего фильма (или пустую строку для прекращения ввода): ");
    }
    
    /*отображение*/
    if (ListisEmpty (&movies))
        printf ("Дaнныe не были введены.");
    else
    {
        printf ("Список фильмов: \n");
        Traverse (&movies, showmovies);
    }
    printf ("Bы ввели %d фильмов.\n", ListItemCount (&movies));
    
    /*очистка*/
    EmptyTheList (&movies);
    printf ("Пpoгpaммa завершена.\n");
    
    return 0;
}

void showmovies (Item item)
{
    printf ("Фильм: %s Рейтинг: %d\n", item.title, item.rating); 
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