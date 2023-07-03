/*addaword.c -- использование функций fprintf (), fscanf () и rewind ()*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main (int argc, char * argv[])
{
    FILE * fp;
    char words [MAX];
    argc = 2;
    argv [1] = "file.txt";
    
    
    if ((fp = fopen (argv [1], "a+")) == NULL)
    {
        fprintf (stdout, "He удается открыть файл \"words\".\n");
        exit (1);
    }
    
    puts ("Введите слова, которые нужно включить в файл; нажмите клавишу Enter");
    puts ("в начале строки для завершения программы.");
    
    while (gets (words) != NULL && words [0] != '\0')
    {
        fprintf (fp, "%s", words);
    }
    
    puts ("Содержимое файла:");
    rewind (fp);                                                                /*вернуться вначало файла*/
    
    while (fscanf (fp, "%s", words) == 1)
        puts (words);
    
    if (fclose (fp) != 0)
        fprintf (stderr, "Ошибка при закрытии файла\n");
    
    return 0;
}