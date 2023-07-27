#include <stdio.h>
int const X = 8;
int const Y = 4;


int main (void)
{                                                                             
    int i, j; 
    char list[X];

    for (i = 0; i < Y; i++)                                                  
    {                                                                         
        for (j = 0; j < X; j++) 
        {
            list[j] = '$';
            printf ("%c", list[j]);
            
        }
        
        printf ("\n");                                                        
    }                                                                         
    return 0;
}