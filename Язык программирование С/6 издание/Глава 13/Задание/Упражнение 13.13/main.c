#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main (void)
{
    auto FILE * fp_in, * fp_save;
    static char name_file_in [MAX_SIZE_NAME], name_file_save [MAX_SIZE_NAME];
    static int x, y;
    int ** arr_bufer;
    
    printf ("Введите имя файла окуда извлекутся данные и куда поместятся\n");
    scanf ("%s %s", name_file_in, name_file_save);
    
    fp_in = fopen (name_file_in, "r");
    
    x = x_arr (fp_in);
    y = y_arr (fp_in);
    
    arr_bufer = arr_create (x, y);
    
    arr_wr (fp_in, arr_bufer, x, y);
    fclose (fp_in);
    
    fp_save = fopen (name_file_save, "a+");
    
    arr_save_out (fp_save, arr_bufer, x, y);
    arr_of (arr_bufer, y);
    fclose (fp_save);

    
    return 0;
}