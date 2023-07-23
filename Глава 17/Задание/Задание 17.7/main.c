/* petclub .c - - и споль зование дерева бин арного поиска */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "tree.h"

char menu (void);
bool addpet (Tree * pt, FILE * fp);
void droppet (Tree * pt);
void showpets (const Tree * pt);
void findpet (const Tree * pt);
void printitem (Item item);
void uppercase (char * str);

int main (void)
{
    Tree pets;
    char choice;
    FILE * pt;
    
    pt = fopen ("file.txt", "r");
    
    InitializeTree (&pets);
    //while (3)
        addpet (&pets, pt);
        addpet (&pets, pt);
        addpet (&pets, pt);
        addpet (&pets, pt);
        addpet (&pets, pt);
        addpet (&pets, pt);
    while ((choice = menu ()) != 'q')
    {
        switch (choice)
        {
            case 'a': 
                showpets (&pets);
                break;
            case 'l': 
                //showpets (&pets);
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
    
    if (TreeIsFull (pt))
        puts ("В дереве кончилось место");
    else
    {
        fscanf (fp, "%s", temp.petname);
        //if (temp.petname [0] != '\0');
        //{
            uppercase (temp.petname);
            temp.reps = 1;
            AddItem (&temp, pt);
        //    return true;
        //}
    }
    
    //return false;
}

void showpets (const Tree * pt)
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

//void findpet (const Tree * pt)
//{
//    Item temp;
//    
//    if (TreeIsEmpty (pt))
//    {
//        puts ("Записи отсутствуют!");
//        return;                                                                  /*если дерево пусто, выход из функции*/
//    }
//    
//    puts ("Пожалуйста, введите кличку животного, которое хотите найти: ");
//    gets (temp.petname);
//    puts ("Teпepь введите вид животного: ");
//    gets (temp.petkind);
//    uppercase (temp.petname);
//    uppercase (temp.petkind);
//    printf ("%s животное %s", temp.petname, temp.petkind);
//    
//    if (InTree (&temp, pt))
//        printf ("является элементом клуба.\n");
//    else
//        printf ("нe является элементом клуба.\n");
//}

//void droppet (Tree * pt) 
//{
//    Item temp;
//    
//    if (TreeIsEmpty (pt))
//    {
//        puts ("Записи отсутствуют!");
//        return;                                                                  /*если дерево пусто, выход из функции*/
//    }
//    
//    puts ("Пожалуйста, введите кличку животного, которое нужно исключить из клуба: ");
//    gets (temp.petname);
//    puts ( "Teпepь введите вид животного: " );
//    gets (temp.petkind);
//    uppercase (temp.petname);
//    uppercase (temp.petkind);
//    printf ("%s животное %s", temp. petname, temp.petkind);
//    
//    if (DeleteItem (&temp, pt))
//        printf ("исключено из клуба.\n");
//    else
//        printf ("нe является членом клуба.\n"); 
//}
//
void uppercase (char * str)
{
    while (*str)
    {
        *str = toupper (*str);
        str++; 
    }
}//