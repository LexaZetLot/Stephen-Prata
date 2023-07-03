/*count.c -- исnользование стандартного ввода-вывода*/

#include <stdio.h>
#include <stdlib.h>                                                             //nрототиn ANSI С функции exit ()

int main (int argc, char * argv[])
{
    int ch;                                                                     //место, куда nомещается каждый символ в том виде, в каком он был nрочитан
    FILE * fp;                                                                  //"указа тель на файл" 
    long count = 0;
    
    if (argc != 2)
    {
        printf ("Исnользование: %s filename\n", argv [0]);
        exit (1); 
    }
    if ((fp = fopen (argv [1], "r")) == NULL)
    {
        printf ("He удается открыть %s\n", argv[1]);
        exit (1);
    }
    
    while ((ch = getc (fp)) != EOF)
    {
        putc (ch, stdout);                                                      // то же, что и putchar (ch); 
        count++; 
    }
    
    fclose (fp);
    printf ("Фaйл %s содержит %ld символов\n", argv[1], count);
    
    return 0; 
}