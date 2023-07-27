/*list.c -- функции, поддерживающие операции со списком*/ 

#include <stdio.h>
#include <stdlib.h>
#include "list.h" 

/*прототип локальной функции*/
static void CopyToNode (Item item, Node * pnode);
static void CopyToItem (Node * pn, Item * pi);

/*функции интерфейса*/
/*устанавливает список в пустое состояние*/
void InitializeList (List * plist)
{
    plist = NULL; 
}

/*возвращает значение true, если список пуст*/
bool ListisEmpty (const List * plist)
{
    if (plist -> head == NULL)
        return true;
    else
        return false;
}

/*возвращает значение true, если список полон*/
bool ListisFull (const List * plist)
{
    Node * pt;
    bool full;
    
    pt = (Node *) malloc (sizeof (Node));
    if (pt == NULL)
        full = true;
    else
        full = false;
    free (pt); 
    
    return full; 
}

bool AddItem (Item item, List * plist)
{
    Node * pnew;
    
    pnew = (Node *) malloc (sizeof (Node));
    if (pnew == NULL)
        return false;                                                           /*выход из функции в случае ошибки*/
    
    CopyToNode (item, pnew);
    pnew -> next = NULL;
    if (ListisEmpty (plist))                                                    /*список пуст, поэтому помещает*/
        plist -> head = pnew;                                                          /*pnew в начало списка*/
    else
        plist -> end -> next = pnew;                                                    /*добавляет pnew в конец*/
    
    plist -> end = pnew;
    return true;
}

/*посещает каждый узел и выполняет функцию, указанную pfun*/
void Traverse (const List * plist, void (* pfun) (Item item))
{
    Node * pnode = plist -> head;                                                      /*устанавливает указатель на начало списка*/
    unsigned int count = 0;
    while (pnode != NULL)
    {
        (*pfun ) (pnode -> item);                                               /*применяет функцию к элементу*/
        pnode = pnode -> next;                                                  /*переход к следующему элементу*/
        count++;
    }
    printf ("Bы ввели %d фильмов.\n", count);
    
}
void EmptyTheList (List * plist)
{
    Node * psave;
    Item dummy;
    
    while (!ListisEmpty (plist))
    {
        CopyToItem (plist -> head, &dummy);
        psave = plist -> head;
        plist -> head = plist -> head -> next;
        free (psave);
    }
    plist -> end = NULL;
}

static void CopyToNode (Item item, Node * pnode)
{
    pnode -> item = item;                                                        /*копирование структуры*/
}

static void CopyToItem (Node * pn, Item * pi)
{
    *pi = pn -> item;
}