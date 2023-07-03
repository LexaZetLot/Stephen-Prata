#include <stdio.h>

#define NAMESIZE 20

int main (void)
{
    FILE * fp;
    static char name_file [10] [NAMESIZE];
    static int i, num, bufer = 0;
    static char ch_1, ch_2;
    
    
    printf ("Введиет симол для поиска.\n");
    scanf ("%c", &ch_1);
    
    printf ("Введиет колличество файлов.\n");
    scanf ("%d", &num);
    
    
    printf ("Введиет файлы или же EOF\n");
    for (i = 0; i < num; i++)
        scanf ("%s", name_file [i]);
    
    clearerr (stdin);
    

    
    for (i = 0; i < num; i++, bufer = 0)
    {
        if (( fp = fopen (name_file [i], "r" )) == NULL)                         
            printf ("Пpoгpaммa reverse не может открыть %s\n", name_file [i]);
        
        
        while ((ch_2 = getc (fp)) != EOF)
            if (ch_1 == ch_2)
                bufer++;
        
        
        
        printf ("%s ровно %d выбраных символов\n", name_file [i], bufer);
        
    }
    
    return 0;
}