/*randЬin .c -- произвольный доступ, двоичный ввод-вывод*/
#include <stdio.h>
#include <stdlib.h>

#define ARSIZE 1000

int main (void)
{
    double numbers [ARSIZE];
    double value;
    const char * file = "numbers.dat";
    int i;
    long pos;
    FILE *iofile;
    
    // создать набор значений типа double
    for (i = 0; i < ARSIZE; i++)
        numbers [i] = 100.0 * i + 1.0 / (i + 1);
    
    // попытка открыть файл
    if ((iofile = fopen (file, "wb")) == NULL)
    {
        fprintf (stderr, "Не удается открыть %s для вывода.\n", file);
        extt (1);
    }
    
    //записать массив в двоичном формате в файл
    fwrite (numbers, sizeof (double), ARSIZE, iofile);
    fclose (iofile);
    
    if ((iofile = fopen (file, "rb")) == NULL)
    {
        fprintf (stderr, "Не удается открыть %s для произвольного доступа.\n", file);
        exit (1); 
    }
    
    // чтение избранных элементов из файла
    printf ("Bвeдитe индекс из диапазона от 0 до %d.\n", ARSIZE - 1);
    scanf ("%d", &i);
    while (i >= 0 && i < ARSIZE)
    {
        pos = (long) i * sizeof (double);                                       //вычислить смещение 
        fseek (iofile, pos, SEEK_SET);                                          //перейти в эту позицию
        fread (&valu, sizeof (double), 1, iofile);
        printf ("B этом случае значение равно %f.\n", value);
        printf ("Bвeдитe следующий индекс (или значение за пределам диапазоны для завершения):\n");
        scanf ("%d", &i);
    }
    //завершение программы
    fclose (iofile);
    puts ("Bceгo доброго!");
    
    return 0;
}