#include <stdio.h>

#define MAX_SIZE 20

int main (void)
{
    FILE * fp_out, * fp_save;
    static char ch, file_name [MAX_SIZE] = "file", file_nwme_save [MAX_SIZE] = "file_save";
    
    fp_out = fopen (file_name, "r");
    fp_save = fopen (file_nwme_save, "a+");
    
    while ((ch = getc (fp_out)) != EOF)
    {
        switch (ch)
        {
            case '0':
                putc (' ', stdout);
                putc (' ', fp_save);
                break;
            case '1':
                putc ('.', stdout);
                putc ('.', fp_save);
                break;
            case '2':
                putc (',', stdout);
                putc (',', fp_save);
                break;
            case '3':
                putc (':', stdout);
                putc (':', fp_save);
                break;
            case '4':
                putc ('~', stdout);
                putc ('~', fp_save);
                break;
            case '5':
                putc ('*', stdout);
                putc ('*', fp_save);
                break;
            case '6':
                putc ('=', stdout);
                putc ('=', fp_save);
                break;
            case '7':
                putc ('?', stdout);
                putc ('?', fp_save);
                break;
            case '8':
                putc ('%', stdout);
                putc ('%', fp_save);
                break;
            case '9':
                putc ('#', stdout);
                putc ('#', fp_save);
                break;
            default:
                putc ('\n', stdout);
                putc ('\n', fp_save);
                break;
        }
        
    }
    fclose (fp_out);
    fclose (fp_save);
    
    return 0;
}