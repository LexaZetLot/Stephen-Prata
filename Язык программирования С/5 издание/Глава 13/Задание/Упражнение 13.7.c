#include <stdio.h>

#define NAMESIZE 20

int main (void)
{
    FILE * fp_1, * fp_2;
    static char name_file_1 [NAMESIZE], name_file_2[NAMESIZE]; 
    static char ch_1, ch_2;
    static int flag_1, flag_2;
    
    printf ("Введите два имя файла через пробел\n");
    scanf ("%s %s", name_file_1, name_file_2);
    
    fp_1 = fopen (name_file_1, "r");
    fp_2 = fopen (name_file_2, "r");
    
    while (ch_1 != EOF || ch_2 != EOF)
    {
        while ((ch_1 = getc (fp_1)) != EOF)
            putc (ch_1, stdout);
      
        while ((ch_2 = getc (fp_2)) != EOF)
            putc (ch_2, stdout);
        printf ("\n");
        if (flag_1 != flag_2)
            return 0;
    }
}