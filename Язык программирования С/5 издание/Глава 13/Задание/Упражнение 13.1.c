/*count.c -- исnользование стандартного ввода-вывода*/

#include <stdio.h>
#include <stdlib.h>                                                             //nрототиn ANSI С функции exit ()

int main (void)
{
    int ch;                                                                     //место, куда nомещается каждый символ в том виде, в каком он был nрочитан
    FILE * fp;                                                                  //"указа тель на файл" 
    char list [100];
    long count = 0;
    
    printf ("Введите название файла");
    scanf ("%s", list);
    
    if ((fp = fopen (list, "r")) == NULL)
    {
        printf ("He удается открыть %s\n", list);
        exit (1);
    }
    
    while ((ch = getc (fp)) != EOF)
    {
        putc (ch, stdout);                                                      // то же, что и putchar (ch); 
        count++; 
    }
    
    fclose (fp);
    printf ("Фaйл %s содержит %ld символов\n", list, count);
    
    return 0; 
}