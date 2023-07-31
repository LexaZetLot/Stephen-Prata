#include <string.h>

#define МAXTITL 40
#define МAXAUTL 40
#define МАХВКS 100                                                              /*максимальное количество книг */

char * s_gets (char * st, int n);

struct book                                                                     /*установка шаблон book*/
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
    printf ("Нажмите [enter] в начале строки, чтобы закончить ввод\n");
    
    while (count < МАХВКS && s_gets (library [count].title, МAXTITL) != NULL && library [count].title [0] != '\0')
    {
        printf ("Tenepь введите ФИО автора.\n");
        s_gets (library[count].author, МAXTITL);
        printf ("Tenepь введите цену.\n");
        scanf ("%f", &library [count++].value);
        
        while (getchar () != '\n')
            continue;                                                           /*очистить входную строку*/
        
        if (count < МАХВКS)
            printf ("Bвeдитe название следующей книги.\n"); 
    }
    if (count > 0)
    {
        printf ("Kaтaлoг ваших книг:\n");
        for (index = 0; index < count; index++)
            printf ("%s авторства %s: $%.2f\n", library [index].title, library [index].author, library [index].value);
    }
    else
        printf ("Booбщe нет книг? Очень плохо.\n");
    
    return 0;
}

char * s_gets (char * st, int n)
{
    char * ret_val;
    char * find;
    int i = 0;
    
    ret_val = fgets (st, n, stdin);
    if (ret_val)
    {
        find = strchr (st, '\n');                                               //поиск символа новой строки
        if (find)                                                               //если адрес не является NULL,
            * find = '\0';                                                      //поместить туда нулевой символ
        else
            while (getchar() != '\n')
                continue;                                                       //отбросить остаток строки
    }
    return ret_val;
}