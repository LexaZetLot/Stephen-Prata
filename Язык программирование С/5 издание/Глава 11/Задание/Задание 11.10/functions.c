#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"


// Меня / выбор значения меню / возврат значения выбора
int menu (void)
{
    int tab;
    
    printf ("****************************************************************************\n");
    printf ("1 Исходный список сторк           3 Отсортированный по размеру\n");
    printf ("2 Упорядочееный список сторк      4 Отсортированный по размеру первого слова\n");
    printf ("5 Выход\n");
    printf ("****************************************************************************\n");
    scanf ("%d", &tab);
    
    return tab;
}


//вывод списка
void list_in (int size, int max_size, char str [size] [max_size])
{
    int i;
    
    for (i = NEW_NULL; i < size; i++)
        printf ("%s", str [i]);
}



// функция сортировки указателей строк
void stsrt (int size, char *ptr[])
{
    char *temp;
    int top, seek, i;
    
    for (top = NEW_NULL; top < size; top++)
        for (seek = top ; seek < size; seek++)
            if (strcmp (ptr [top], ptr [seek]) > NEW_NULL)
            {
                temp = ptr [top];
                ptr [top] = ptr [seek];
                ptr [seek] = temp; 
            }
}


//функция выводя чписка через массив указателей
void ptr_in (int size, char *ptr[])
{
    int i;
    
    for (i = NEW_NULL; i < size; i++)
        printf ("%s", ptr [i]);
    
}


//Сортировка по длине сотроки
void buble_str (int size, int max_size, char str [size] [max_size])
{
    int arr [size];
    int i, j, bufer;
    char bufer_str [MAX_SIZE];
    
    
    for (i = 0; i < size; i++)
        arr [i] = strlen (str [i]) - 1;
    
    for (i = 0; i < size; i++)
        for (j = i; j < size; j++)
            if (arr [j] < arr [j + 1] && j + 1 < size)
                {
                    bufer = arr [j];
                    strcpy (bufer_str, str [j]); 
                    arr [j] = arr [j + 1];
                    strcpy (str [j], str [j + 1]);
                    arr [j + 1] = bufer;
                    strcpy (str [j + 1], bufer_str);
                }
    
    list_in (size, max_size, str);
}

//Сортировка по длине первого слова
void buble_word (int size, int max_size, char str [size] [max_size])
{
    int arr [size];
    int i, j, bufer;
    char bufer_str [MAX_SIZE];
    
    
    for (i = 0, arr [i] = 0; i < size; i++)
        for (j = 0; j < max_size && str [i] [j] != '\0' && !isspace (str [i] [j]); j++, arr [i] += 1){}

    
    for (i = 0; i < size; i++)
        for (j = i; j < size; j++)
            if (arr [j] < arr [j + 1] && j + 1 < size)
                {
                    bufer = arr [j];
                    strcpy (bufer_str, str [j]); 
                    arr [j] = arr [j + 1];
                    strcpy (str [j], str [j + 1]);
                    arr [j + 1] = bufer;
                    strcpy (str [j + 1], bufer_str);
                }
    
    for (i = 0; i < size; i++)
        printf ("%s", str [i]);
    
    
}