
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 40

int main (int argc, char * argv[])
{
    FILE * fp;
    char words [MAX] = "file.txt";
    char i;
    int  position;
    
    printf ("Выбирите позицию.\n");
    scanf ("%d", &position);
    fp = fopen (words, "r");
    
    fseek (fp, position, SEEK_SET);
    
    while ((i = getc (fp)) != '\n')
        putc (i, stdout);;
    
    
    return 0;
}