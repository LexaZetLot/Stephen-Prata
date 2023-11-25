/*films 2.c -- использование связного списка структур*/

#include <stdio.h>
#include <stdlib.h>                                                             /*содержит прототип функции malloc ()*/
#include <string.h>                                                             /*содержит прототип функции strcpy ()*/

#define TSIZE 45                                                                /*размер массива для хранения названия*/

struct film
{
    char title;
    struct film * next;                                                         /*указывает на следующую структуру в списке*/
    struct film * past;
};

int main (void)
{
    struct film * head = NULL;
    struct film * prev, * current;
    char input;
    
/*Сбор и сохранение информации*/
    puts ("Введите название первого фильма:");
    while ((input = getchar ()) != EOF)
    {
        current = (struct film *) malloc (sizeof (struct film));
        if (head == NULL)                                                       /*первая с труктура*/
        {
            head = current;
            current -> past = NULL;
        }
        else                                                                    /*последующие структуры*/
        {
            prev -> next = current;
            current -> past = prev;                                             /**********/
        }
        current -> next = NULL;
        current -> title = input;
        while (getchar () != '\n')
            continue;
        
        prev = current; 
    }
    
    while (current != NULL)
    {
        printf ("%c\n", current -> title);
        current = current -> past;
    }
    
/*Программа выполнена, поэтому можно освободить память*/
    current = head;
    while (current != NULL)
    {
        free (current);
        current = current -> next;
    }
    printf ("Пpoгpaммa завершена.\n");
    
    return 0;
}