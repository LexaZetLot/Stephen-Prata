#include <stdio.h>
#include <stdlib.h>

int x_arr (FILE * fp_in)
{
    static int x, y = 1;
    static char ch;
    
    while ((ch = getc (fp_in)) != EOF)
    {
        if (ch != '\n' && ch != '\r' && ch != ' ')
            x++;
        if (ch == '\n')
            y++;
    }
    
    fseek (fp_in, 0L, SEEK_SET);
    
    return x / y;
}

int y_arr (FILE * fp_in)
{
    static int y = 1;
    static char ch;
    
    while ((ch = getc (fp_in)) != EOF)
        if (ch == '\n')
            y++;
    
    fseek (fp_in, 0L, SEEK_SET);
    
    return y;
}

int ** arr_create (int x, int y)
{
    int ** arr;
    
    arr = (int **) malloc (y * sizeof(int *));
    for (int i = 0; i < y; i++)
        arr [i] = (int *) malloc (x * sizeof(int));
    
    return arr;
}

void arr_wr (FILE * fp_in, int ** arr, int x, int y)
{
    for (int i = 0; i < y; i++)
        for (int j = 0; j < x; j++)
            fscanf (fp_in, "%d", &arr [i] [j]);
}

void arr_of (int ** arr, int y)
{
    for (int i = 0; i < y; i++)
        free(arr[i]);
    free(arr);
}


void arr_main_initz (int ** arr_bufer, int ** arr_main, int x, int y)
{
    for (int i = 0; i < y; i++)
        for (int j = 0; j < x; j++)
        {
            if (i == 0 && j == 0)
                arr_main [i] [j] = (int) ((arr_bufer [i + 1] [j] + arr_bufer [i] [j + 1]) / 2);
            else if (i == (y - 1) && j == 0)
                arr_main [i] [j] = (int) ((arr_bufer [i - 1] [j] + arr_bufer [i] [j + 1]) / 2);
            else if (i == 0 && j == (x - 1))
                arr_main [i] [j] = (int) ((arr_bufer [i + 1] [j] + arr_bufer [i] [j - 1]) / 2);
            else if (i == (y - 1) && j == (x - 1))
                arr_main [i] [j] = (int) ((arr_bufer [i - 1] [j] + arr_bufer [i] [j - 1]) / 2);
            
            
            else if (j == 0 && i != 0 && i != (y - 1))
                arr_main [i] [j] = (int) ((arr_bufer [i + 1] [j] + arr_bufer [i - 1] [j] + arr_bufer [i] [j + 1]) / 3);
            else if (j == (x - 1) && i != 0 && i != (y - 1))
                arr_main [i] [j] = (int) ((arr_bufer [i + 1] [j] + arr_bufer [i - 1] [j] + arr_bufer [i] [j - 1]) / 3);
            else if (i == 0 && j != 0 && j != (x - 1))
                arr_main [i] [j] = (int) ((arr_bufer [i + 1] [j] + arr_bufer [i] [j + 1] + arr_bufer [i] [j - 1]) / 3);
            else if (i == (y - 1) && j != 0 && j != (x - 1))
                arr_main [i] [j] = (int) ((arr_bufer [i - 1] [j] + arr_bufer [i] [j + 1] + arr_bufer [i] [j - 1]) / 3);
            
            else if (i != 0 && i != (y - 1) && j != 0 && j != (x - 1))
                arr_main [i] [j] = (int) ((arr_bufer [i - 1] [j] + arr_bufer [i + 1] [j] + arr_bufer [i] [j + 1] + arr_bufer [i] [j - 1]) / 4);
        }
}


void arr_save_out (FILE * fp_out, int ** arr_main, int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            switch (arr_main [i] [j])
            {
                case 0:
                    putc (' ', stdout);
                    putc (' ', fp_out);
                    break;
                case 1:
                    putc ('.', stdout);
                    putc ('.', fp_out);
                    break;
                case 2:
                    putc (',', stdout);
                    putc (',', fp_out);
                    break;
                case 3:
                    putc (':', stdout);
                    putc (':', fp_out);
                    break;
                case 4:
                    putc ('~', stdout);
                    putc ('~', fp_out);
                    break;
                case 5:
                    putc ('*', stdout);
                    putc ('*', fp_out);
                    break;
                case 6:
                    putc ('=', stdout);
                    putc ('=', fp_out);
                    break;
                case 7:
                    putc ('?', stdout);
                    putc ('?', fp_out);
                    break;
                case 8:
                    putc ('%', stdout);
                    putc ('%', fp_out);
                    break;
                case 9:
                    putc ('#', stdout);
                    putc ('#', fp_out);
                    break;
                default:
                    putc ('\n', stdout);
                    putc ('\n', fp_out);
                    break;
            }
        }
        putc ('\n', stdout);
        putc ('\n', fp_out);
        
    }
}