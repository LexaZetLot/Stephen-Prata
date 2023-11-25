/*booksave.с -- сохранение содержимого структуры в файле*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define МAXTITL 40
#define МAXAUTL 40 
#define МАХВКS 10                                                               /*максимальное количество книг*/

char * s_gets (char * st, int n);

struct book                                                                     /*определение шаблона book*/ 
{
    char title [МAXTITL];
    char author [МAXAUTL];
    float value;
};

int main (void)
{
    struct book library [МАХВКS];                                               /*массив структур*/
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof (struct book);
    
    if ((pbooks = fopen ("book.dat", "a + b")) == NULL) 
    {
        fputs ("He удается открыть файл book.dat\n", stderr);
        exit (1);
    }
    
    rewind (pbooks);                                                            /*переход в начало файла*/
    
    while (count < МАХВКS && fread (&library [count], size, 1, pbooks) == 1)
    {
        if (count == 0)
            puts ("Текущее содержимое файла Ьооk.dat: ");
        printf ("%s авторство %s: $%.2f\n", library [count].title, library [count].author, library [count].value);
        count++; 
    }
    
    filecount = count;
    if (count == МАХВКS)
    {
        fputs ("Фaйл book.dat заполнен.", stderr);
        exit (2);
    }
    
    puts ("Введите названия новых книг.");
    puts ("Нажмите [enter] в начале строки, чтобы закончить ввод.");
    
    while (count < МАХВКS && s_gets (library [count].title, МAXAUTL) != NULL && library [count]. title [0] != '\0')
    {
        puts ("Teпepь введите имя автора.");
        s_gets (library [count].author, МAXAUTL);
        puts ("Teпepь введите цену книги.");
        scanf ("%f", &library [count++].value);
        
        while (getchar () != '\n')
            continue;                                                           /*очистить входную строку*/ 
        
        if (count < МАХВКS)
            puts ("Введите название следующей книги.");
    }
    
    if (count > 0)
    {
        puts ("Каталог ваших книг:");
        for (index = 0; index < count; index++) 
            printf ("%s Ьу %s: $%.2f\n", library [index].title, library [index].author, library [index].value);
        
        fwrite (&library [filecount], size, count - filecount, pbooks); 
    }
    else
        puts ("Booбщe нет книг? Очень плохо.\n");
    
    puts ("Программа завершена\n");
    fclose (pbooks);
    
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