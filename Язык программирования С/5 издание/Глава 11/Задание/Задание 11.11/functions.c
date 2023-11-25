#include <stdio.h>
#include <string.h>
#include "functions.h"

//Ввод строки
void str_vvod (int size, char str [size])
{
    size_t plus_size = 0;

    while (fgets (str + plus_size, MAX_SIZE, stdin))
        plus_size = strlen (str);

}