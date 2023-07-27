#include <stdio.h>
#include <stdlib.h>                                                             
#include <string.h>                                                             

#define LEN 40 

int main (void)
{
    FILE *in, *out;                                                             
    int ch;
    char name [LEN];                                                             
    int count = 0;
    char neme1 [LEN], neme2 [LEN];
    
    
    printf ("Ведите имя для чего-то\n");                             
    scanf ("%s %s", neme1, neme2);
    
    //настройк а ввода
    if ((in = fopen (neme1, "r")) == NULL)
    {
        fprintf (stderr , "Не удается открыть файл \"%s\"\n", neme1);
        exit (2); 
    }
    
    //настройка вывода
    strncpy (name, neme2, LEN - 5 );                                            //копирование имени файла
    name [LEN - 5] = '\0';
    strcat (name, ".red");                                                      //добавить суффикса .red
    if ((out = fopen (name, "w")) == NULL)
    {
        fprintf (stderr, "Не могу построить выходной файл.\n");
        exit (3); 
    }
    
    //копирование данных 
    while ((ch = getc (in)) != EOF)
        if (count++ % 3 == 0)
            putc (ch, out);                                                     //печатать каждый третий символ
    
    //очистка 
    if (fclose (in) != 0 || fclose (out) != 0)
        fprintf (stderr, "Oшибкa при закрытии файла\n" );
    
    return 0;
}