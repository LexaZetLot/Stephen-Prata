#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

int main (void)
{
    int words;
    char ** str;
    
    printf ("Введите колличество слов: ");
    scanf ("%d", &words);
    
    str = (char**) malloc (words * sizeof (char *));
    for (int i = 0; i < words; i++)
        str [i] = (char*) malloc (SIZE * sizeof (char));
    
    for (int i = 0; i < words;i++)
    {
        scanf ("%s", str [i]);
    }
    
    for (int i = 0; i < words;i++)
    {
        printf ("%s\n", str [i]);
    }
    
    for (int i = 0; i < words; i++)
        free (str [i]);
    free (str);
    return 0;
}