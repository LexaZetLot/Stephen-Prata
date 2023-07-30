/*compback.c -- значения, в звращаемые функцией strcmp ()*/

#include <stdio.h> 
#include <string.h>

int main (void)
{
    
    printf ("strcmp (\"A\", \"А\") возвращает ");
    printf ("%d\n", strcmp ("А", "А"));
    
    printf ("strcmp (\"A\", \"В\") возвращает ");
    printf ("%d\n", strcmp ("А", "В"));
    
    printf ("strcmp (\"B\", \"А\") возвращает ");
    printf ("%d\n", strcmp ("В", "А"));
    
    printf ("strcmp (\"C\", \"А\") возвращает ");
    printf ("%d\n", strcmp ("С", "А"));
    
    printf ("strcmp (\"Z\", \"а\") возвращает ");
    printf ("%d\n", strcmp ("Z", "а"));
    
    printf ("strcmp (\"apples\", \"apple\") возвращает ");
    printf ("%d\n", strcmp ("apples", "apple"));
    
    return 0;
    
}