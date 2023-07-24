/* petclub .c - - и споль зование дерева бин арного поиска */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "tree.h"

char menu (void);
bool addpet (Tree * pt, FILE * fp);
void showpets (Tree * pt);
void findpet (Tree * pt);
void printitem (Item item);
void uppercase (char * str);

int main (void)
{
    Tree pets;
    char choice;
    FILE * pt;
    
    pt = fopen ("file.txt", "r");
    
    if (false)
        printf ("sadasd\n");
    
    InitializeTree (&pets);
    while (addpet (&pets, pt)){}

    while ((choice = menu ()) != 'q')
    {
        switch (choice)
        {
            case 'a': 
                showpets (&pets);
                break;
            case 'l': 
                findpet (&pets);
                break;
            case 'f': 
                exit (1);
                break;
        }
    }
    DeleteAll (&pets);
    puts ("Программа завершена.");
    
    return 0;
}

char menu (void)
{
    int ch;
    
    puts ("Введите букву, соответствующую вашему выбору: ");
    puts ("a) вывод списка");  
    puts ("l) Вывод повторения слова в программе");   
    puts ("f) выход из программы");     
    
    while ((ch = getchar ()) != EOF )
    {
        while (getchar () != '\n')                                              /*отбрасывание остальной части строки*/
            continue;
        
        ch = tolower (ch);
        if (strchr ("alrfndq", ch) == NULL)
            puts ("Пожалуйста, введите букву а, l, f, n, d или q: ");
        else
            break; 
    }
    
    if (ch == EOF)                                                              /*ввод символа EOF приводит к выходу из программы*/
        ch = 'q';
    
    return ch;
}

bool addpet (Tree * pt, FILE * fp)
{
    Item temp;
    int buf = 0;
    
    if (TreeIsFull (pt))
        puts ("В дереве кончилось место");
    if (fscanf (fp, "%s", temp.petname) > 0)
    {
        
        uppercase (temp.petname);
        temp.reps = 1;
        AddItem (&temp, pt);
        return 1;
    }
    
    return 0;
}

void showpets ( Tree * pt)
{
    if (TreeIsEmpty (pt))
        puts ("Записи отсутствуют!");
    else;
        Traverse (pt, printitem);
}

void printitem (Item item)
{
    printf ("Слово: %-19s Количество: %-19d\n", item.petname, item.reps);
}

void findpet ( Tree * pt)
{
    Item temp;
    
    if (TreeIsEmpty (pt))
    {
        puts ("Записи отсутствуют!");
        return;                                                                  /*если дерево пусто, выход из функции*/
    }
    
    puts ("Пожалуйста, введите слово: ");
    gets (temp.petname);
    
    uppercase (temp.petname);
    
    if (InTree (&temp, pt))
        printf ("является элементом клуба.\n");
    else
        printf ("нe является элементом клуба.\n");
}

void uppercase (char * str)
{
    while (*str)
    {
        *str = toupper (*str);
        str++; 
    }
}