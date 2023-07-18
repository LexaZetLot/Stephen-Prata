/*qsorter.c -- использование быстрой сортировки для упорядочения групп чисел */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20

struct name 
{
    char name [SIZE];
    char last_name [SIZE];
};


void showarray (const struct name ar [], int n);
int mycomp (const void * p1, const void * p2);

int main (void)
{
    struct name names [4] =
    {
        {
            "jkasd",
            "fkdafadf"
        },
        {
            "svvvsa",
            "fdasfad"
        },
        {
            "sdafdsf",
            "sdfdsagg"
        },
        {
            "sdadasd",
            "sdasdasd",
        }
    };
    
    qsort (names, 4, sizeof (struct name), mycomp);
    puts ("Сортированный список: ");
    showarray (names, 4);
    return 0; 
}


void showarray (const struct name ar [], int n)
{
    int index;
    
    for (index = 0; index < n; index++)
        printf ("%s %s\n", ar[index].name, ar[index].last_name);
}

/*сортировка по возрас танию*/
int mycomp (const void * p1, const void * p2)
{
    /*для доступа к значениям нужны указатели на тип double*/
    const struct name * a1 = (const struct name *) p1;
    const struct name * a2 = (const struct name *) p2;
    
    if (memcmp (a1 , a2, SIZE) < 0)
        return -1;
    else if (memcmp (a1 , a2, SIZE) == 0)
        return 0; 
    else
        return 1; 
}