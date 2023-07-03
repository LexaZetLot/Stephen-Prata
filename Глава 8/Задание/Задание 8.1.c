#include <stdio.h>

int main(void) 
{
    
    int i;
    
    while (getchar () != EOF)
    {
        i++;
    }
    
    printf ("Число символов равно %d", i);
    
    return 0;
}