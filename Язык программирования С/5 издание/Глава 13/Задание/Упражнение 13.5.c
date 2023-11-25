#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1024
#define SLEN 81

void append (FILE *source, FILE *dest);

int main (int argc, char *argv [])
{
    FILE *fa, *fs;                                                              //fa для файла назначения, fs для исходного файла
    int files = 0;                                                              //количество добавляемых файлов
    argc = 2;
    argv [1] = "file1";                                                         //имя файла назначения

 
    
    if ((fa = fopen (argv [1], "w")) == NULL)
    {
        fprintf (stderr, "Не удается открыть файл %s\n", argv [1]);
        exit (2);
    }
    
    if (setvbuf (fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs ("He удается создать буфер вывода\n", stderr);
        exit (3);
    }
    
    while (gets (argv [2]) && argv [2] [0] != '\0')
    {
        if (strcmp (argv [2], argv [1]) == 0)
            fputs ("Нельзя добавлять файл в конец самого ceбя\n", stderr );
        else if ((fs = fopen (argv [2], "r")) == NULL)
            fprintf (stderr, "Не удается открыть файл %s\n", argv [2]);
        else 
        {
            if (setvbuf (fs, NULL, _IOFBF, BUFSIZE ) != 0)
            {
                fputs ("He удается создать буфер ввoдa\n", stderr);
                continue;
            }
            append (fs, fa);
            
            if (ferror (fs) != 0)
                fprintf (stderr, "Ошибка во время чтения файла %s.\n", argv [2]);
            
            if (ferror (fa) != 0)
                fprintf (stderr, "Ошибка во время записи в файл %s.\n", argv [1]);
            
            fclose (fs); 
            files++;
            printf ("Фaйл %s добавлен.\n", argv [2]);
            puts ("Введите имя следующего файла (или пустую строку для завершения):"); 
            
        }
    }
    printf ("Гoтoвo. Добавлено %d файлов.\n", files);
    fclose (fa);
    
    return 0; 
}


void append (FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp [BUFSIZE];                                                 //распределить один раз
    while ((bytes = fread (temp, sizeof (char), BUFSIZE, source)) > 0)
        fwrite (temp, sizeof (char), bytes, dest);
}