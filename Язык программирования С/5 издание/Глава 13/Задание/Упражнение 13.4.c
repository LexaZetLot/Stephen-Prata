#include <stdio.h>

int main (int argc, char * argv[])
{
    int i;
    FILE * pf;
    
    argc = 3;
    argv [1] = "file1";
    argv [2] = "file2";
    
    for (i = 1; i < argc; i++)
    {
        if ((pf = fopen (argv [i], "r")) != NULL)
            printf ("%s\n", argv [i]);
        
        fclose (pf);
    }
    
    return 0;
}