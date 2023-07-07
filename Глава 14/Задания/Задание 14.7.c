#include <stdio.h>
#include <stdlib.h>

#define МAXTITL 40
#define МAXAUTL 40 
#define МАХВКS 10                                                               /*максимальное количество книг*/

struct book                                                                     /*создание шаблона book*/ 
{
    char title [МAXTITL];
    char author [МAXAUTL];
    float value;
};

int main (void)
{
    struct book library [МАХВКS];
    struct book bufer;
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof (struct book);
    char str [10] = "book.dat";
    char ch;
    
    if ((pbooks = fopen (str, "r + b")) == NULL) 
    {
        fputs ("He удается открыть файл book.dat\n", stderr);
        exit (1);
    }
    
    rewind (pbooks);                                                            /*переход в начало файла*/
    
    while (count < МАХВКS && fread (&library [count], size, 1, pbooks) == 1)
    {
        if (count == 0)
            puts ("Текущее содержимое файла Ьооk.dat: ");
        printf ("%s Ьу %s: $%.2f\n", library [count].title, library [count].author, library [count].value);
        count++; 
    }
    
    filecount = count;
    if (count == МАХВКS)
    {
        fputs ("Фaйл book.dat заполнен.", stderr);
        exit (2);
    }
    
    puts ("Введите названия новых книг.");
    puts ("Нажмите [enter] в начале строки для выхода из программы.");
    
    while (count < МАХВКS && gets (library [count].title) != NULL && library [count]. title [0] != '\0')
    {
        puts ("Teпepь введите имя автора.");
        gets (library [count].author);
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
        {
            printf ("Хотите изменить элемент (y or n)\n");
            printf ("%s Ьу %s: $%.2f\n", library [index].title, library [index].author, library [index].value);
            scanf ("%c", &ch);
            while (getchar () != '\n')
                continue;
            if (ch == 'y')
            {
                puts ("Новое название книги.");
                scanf ("%s", bufer.title);
                puts ("Teпepь введите имя автора.");
                scanf ("%s", bufer.author);
                puts ("Teпepь введите цену книги.");
                scanf ("%f", &bufer.value);
                
                library [index] = bufer;
            }

        }
        rewind (pbooks); 
        
        fwrite (&library [0], size, index, pbooks); 
    }
    else
        puts ("Booбщe нет книг? Очень плохо.\n");
    
    puts ("Bceгo доброго.\n");
    fclose (pbooks);
    
    return 0; 
}