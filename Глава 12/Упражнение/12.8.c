#include <stdio.h>

char color = 'В';

void first (void);
void second (void);

int main (void)
{
    extern char color;
    
    printf ("color в main () равно %c\n", color);
    first ();
    printf ("color в main () равно %c\n", color);
    second ();
    printf ("color в main () равно %c\n", color); 
    
    return 0; 
}

void first (void)
{
    char color;
    color = 'R';
    printf ("color в first () равно %c\n", color);
}

void second (void)
{
    color = 'G';
    printf ("color в second () равно %c\n", color);
}