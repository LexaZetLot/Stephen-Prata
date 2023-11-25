/*filmsЗ.c -- использование связного списка в стиле ADT*/
/*компилировать вместе с list.c*/

#include <stdio.h>
#include <stdlib.h>                                                             /*прототип функции exit ()*/
#include "list.h"                                                               /*определение типов List, Item*/

void showmovies (Item item); 

int main (void)
{
    List movies;
    Item temp;
    
    /*инициализация*/
    InitializeList (&movies);
    for (int i = 0; i < МAXSIZE; i++)
        printf ("%s   %d\n", movies.entries[i].title, movies.entries[i].rating);
    
    printf ("%d", ListisFull (&movies));
    if (ListisFull (&movies))
    {
        fprintf (stderr, "Доступная память отсутствует! Программа завершена.\n");
        exit (1);
    }
    
    /*сбор и сохранение информации*/
    puts ("Введите название первого фильма:");
    for (int i = 0; i < МAXSIZE && scanf ("%s", movies.entries[i].title) == 1; i++)
    {
        puts ("Введите свое значение рейтинга <0-10>:");
        scanf ("%d", &(movies.entries[i].rating));
        while ( getchar () != '\n')
            continue;
        movies.items++;
        if (ListisFull (&movies))
        {
            puts ("Список полон.");
            break;
        }
        
        puts ("Введите название следующего фильма (или EOF): ");
        
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