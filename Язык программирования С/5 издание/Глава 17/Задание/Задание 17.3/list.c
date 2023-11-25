/*list.c -- функции, поддерживающие операции со списком*/ 

#include <stdio.h>
#include <stdlib.h>
#include "list.h" 


/*функции интерфейса*/
/*устанавливает список в пустое состояние*/
void InitializeList (List * plist)
{
    for (int i = 0; i < МAXSIZE; i++)
    {
        plist -> entries[i].title[0] = '\0';
        plist -> entries[i].rating = -1;
    }
    plist -> items = 0;
}

/*возвращает значение true, если список пуст*/
bool ListisEmpty (const List * plist)
{
    if (plist -> items == 0)
        return true;
    else
        return false;
}

/*возвращает значение true, если список полон*/
bool ListisFull (const List * plist)
{
    if (plist -> items == МAXSIZE)
        return true;
    else
        return false;
}

/*возвращает количество узлов*/
int ListItemCount (const List * plist)
{
    return plist -> items; 
}

/*посещает каждый узел и выполняет функцию, указанную pfun*/
void Traverse (const List * plist, void (* pfun) (Item item))
{
    int i = 0;
    
    while (plist -> entries[i].title[0] != '\0')
    {
        (*pfun ) (plist -> entries[i]);                                            
        i++;
    }
}


void EmptyTheList (List * plist)
{
    for (int i = 0; i < МAXSIZE; i++)
    {
        plist -> entries[i].title[0] = '\0';
        plist -> entries[i].rating = -1;
    }
    plist -> items = 0;
}