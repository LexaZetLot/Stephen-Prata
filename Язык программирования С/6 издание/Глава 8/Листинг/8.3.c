//file_eof.c -- открывает файл и отображает его содержимое

#include <stdio.h>
#include <stdlib.h>                                                             //для функции exit ()

int main (void)
{
    int ch;
    FILE * fp;
    char fname [50];                                                            //для хранения имени файла
    
    printf ("Bвeдитe имя файла: ");
    scanf ("%s", fname);
    
    fp = fopen (fname, "r");                                                    //открыть файл для чтения
    if (fp == NULL)                                                             //попытка завершилась неудачей 
    {
        printf ("He удается открыть файл. Программа завершена.\n");
        exit (1);                                                               //выйти из программы
    }
    
    //функция getc (fp) получает символ из открытого файла
    while ((ch = getc (fp)) != EOF)
        putchar (ch);
    fclose (fp);                                                                //закрыть файл
    
    
    return 0;
}