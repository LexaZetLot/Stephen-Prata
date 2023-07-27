/*addaword.c -- использование функций fprintf (), fscanf () и rewind ()*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 40

int main (int argc, char * argv[])
{
    FILE * fp;
    char words [MAX];
    char i;
    int j = 0;
    argc = 2;
    argv [1] = "file.txt";
    
    
    if ((fp = fopen (argv [1], "a+")) == NULL)
    {
        fprintf (stdout, "He удается открыть файл \"words\".\n");
        exit (1);
    }
    
    puts ("Введите слова, которые нужно включить в файл; нажмите клавишу Enter");
    puts ("в начале строки для завершения программы.");
    
    fseek (fp, -2L, SEEK_END);
    i = getc (fp);
    
    if (i > '1')
        i++;
    else
        i = '1';
    while (gets (words) != NULL && words [0] != '\n')
    {
        words [strlen (words)] = '.';
        words [strlen (words)] = i;
        
        fprintf (fp, "%s\n", words);
        i++;
        
        for (j = 0; j < MAX; j++)
            words [j] = '\0';
    }
    
    puts ("Содержимое файла:");
    rewind (fp);
    
    while (fscanf (fp, "%s", words) == 1)
        puts (words);
    
    if (fclose (fp) != 0)
        fprintf (stderr, "Ошибка при закрытии файла\n");
    
    return 0;
}