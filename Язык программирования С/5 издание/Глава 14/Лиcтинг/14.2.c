/*manybook.c -- каталог для нескольких книг*/

#include <stdio.h>

#define МAXTITL 40
#define МAXAUTL 40
#define МАХВКS 100                                                              /*максимальное количество книг */

struct book                                                                     /*шаблон book*/
{
    char title [МAXTITL];
    char author [МAXAUTL];
    float value; 
};

int main (void)
{
    struct book library [МАХВКS];                                               /*массив структур типа book*/
    int count = 0;
    int index;
    
    printf ("Bвeдитe название книги.\n");
    printf ("Haжмитe [enter] в начале строки для выхода из программы.\n");
    
    while (count < МАХВКS && gets (library [count].title) != NULL && library [count].title [0] != '\0')
    {
        printf ("Tenepь введите ФИО автора.\n");
        gets (library[count].author);
        printf ("Tenepь введите цену книги.\n");
        scanf ("%f", &library [count++].value);
        
        while (getchar () != '\n')
            continue;
        
        if (count < МАХВКS)
            printf ("Bвeдитe название следующей книги.\n"); 
    }
    if (count > 0)
    {
        printf ("Kaтaлoг ваших книг:\n");
        for (index = 0; index < count; index++)
            printf ("%s от %s: $%.2f\n", library [index].title, library [index].author, library [index].value);
    }
    else
        printf ("Booбщe нет книг? Очень плохо.\n");
    
    return 0;
}