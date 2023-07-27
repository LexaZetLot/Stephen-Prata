#include <stdio.h>
#include <string.h>

#define NAME_SIZE_FILE 40
#define BUFER 1024


int main (void)
{
    //обьявления
    char coppy_name_file [NAME_SIZE_FILE], insert_name_file [NAME_SIZE_FILE];   //название файлов
    FILE *fp_coppy, *fp_insert;                                                 //указатели на файлы
    static char line [BUFER];                                                   //буфер
    static int i;
    
    
    //ввод имен файлов
    printf ("Ведите имя файлов для копирования\n");                             
    scanf ("%s %s", coppy_name_file, insert_name_file);

    //задания казателей файлов
    fp_coppy = fopen (coppy_name_file, "r");                                    
    fp_insert = fopen (insert_name_file, "w+");
    

    while (fread (line, sizeof (char), BUFER, fp_coppy) != 0)
    {
        while (line [i] != '\0')
        {
            if (line [i] != ' ')
                line [i] -= 0x20;
            i++;
            
        }
        fwrite (line, sizeof (char), strlen (line), fp_insert);
    }

    fclose (fp_coppy);
    fclose (fp_insert);
    
    return 0;
}