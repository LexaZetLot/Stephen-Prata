#include <stdio.h>
#include "functions.h"

int main (void)
{
    int i = NEW_NULL, j = NEW_NULL; 
    char flag;
    char str [10] [MAX_SIZE], *ptr [10];
    
    while (fgets (str [i], MAX_SIZE, stdin) && ++i < 10){}

    clearerr (stdin);
    
    while (i)
    {
        flag = menu ();
        switch (flag)
        {
            case 1:
                list_in (i, MAX_SIZE, str);
                break;
            case 2:
                for (j = 0; j < i; j++)
                    ptr [j] = str [j];
                stsrt (i, ptr);
                ptr_in (i, ptr);
                break;
            case 3:
                buble_str (i, MAX_SIZE, str);
                break;
            case 4:
                 buble_word (i, MAX_SIZE, str);
                break;
            case 5:
                i = NEW_NULL;
                break;
            default:
                printf ("Неправильный ввод, повторите попытку позже\n");
                break;
        }
    }
    
    return NEW_NULL;
}