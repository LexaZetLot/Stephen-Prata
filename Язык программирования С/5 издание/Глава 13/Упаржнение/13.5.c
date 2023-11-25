#include <stdio.h>

#define SIZE 1000

int has_ch (char ch, const char * line);

int main (void)
{
    FILE *fp;
    char ch = 'q';
    char line [SIZE];
    
    
    fp = fopen ("file", "r");
    
    while (fgets (line, SIZE, fp) != NULL)
        if (has_ch (ch, line))
            fputs (line, stdout);
    
    fclose (fp);
    return 0;
}

int has_ch (char ch, const char * line)
{
    while (* line)
        if (ch == * line++)
            return (1);
    
    return 0;
}