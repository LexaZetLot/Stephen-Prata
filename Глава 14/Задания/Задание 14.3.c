/*manybook.c -- каталог для нескольких книг*/

#include <stdio.h>
#include <string.h>

#define MAXTITL 40
#define MAXAULT 40
#define MAXBKS 100                                                              /*максимальное количество книг */

struct book                                                                     /*шаблон book*/
{
    char title [MAXTITL];
    char author [MAXAULT];
    float value; 
};

int main (void)
{
    struct book library [MAXBKS];
    struct book bufer;
    char str [MAXTITL];
    int count = 0;
    int index;
    
    printf ("Bвeдитe название книги.\n");
    printf ("Haжмитe [enter] в начале строки для выхода из программы.\n");
    
    while (count < MAXBKS && gets (library [count].title) != NULL && library [count].title [0] != '\0')
    {
        printf ("Tenepь введите ФИО автора.\n");
        gets (library[count].author);
        printf ("Tenepь введите цену книги.\n");
        scanf ("%f", &library [count++].value);
        
        while (getchar () != '\n')
            continue;
        
        if (count < MAXBKS)
            printf ("Bвeдитe название следующей книги.\n"); 
    }
    
    if (count > 0)
    {
        printf ("Kaтaлoг ваших книг:\n");
        for (index = 0; index < count; index++)
            printf ("%s от %s: $%.2f\n", library [index].title, library [index].author, library [index].value);
        printf ("\n\n");
        
        for(int i = 1; i < count; i++)
            for(int j = 0; j < count - i; j++)
                if(strcmp(library [j].title, library [j + 1].title) > 0)
                {
                    bufer = library [j];
                    library [j] = library [j + 1];
                    library [j + 1] = bufer;
                }
        for (index = 0; index < count; index++)
            printf ("%s от %s: $%.2f\n", library [index].title, library [index].author, library [index].value);
        printf ("\n\n");
        
        for(int i = 1; i < count; i++)
            for(int j = 0; j < count - i; j++)
                if(library [j].value > library [j + 1].value)
                {
                    bufer = library [j];
                    library [j] = library [j + 1];
                    library [j + 1] = bufer;
                }
                
        for (index = 0; index < count; index++)
            printf ("%s от %s: $%.2f\n", library [index].title, library [index].author, library [index].value);
    }
    else
        printf ("Booбщe нет книг? Очень плохо.\n");
    
    return 0;
}