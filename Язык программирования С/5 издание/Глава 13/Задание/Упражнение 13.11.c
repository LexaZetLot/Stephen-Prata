#include <stdio.h>
#include <string.h>

#define MAX_SIZE_STR 400

int main (int argc, char * argv[])
{
    FILE * pt;
    char str [MAX_SIZE_STR];

    argc = 3;
    argv [1] = "file.txt";
    argv [2] = "qwerty";

    pt = fopen (argv [1], "r");     
    while (fgets (str, MAX_SIZE_STR, pt))
    {
        if (strstr (str, argv [2]))
            puts (str);
    }
    
    fclose (pt);
    return 0;
}