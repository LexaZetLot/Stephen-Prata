#include <stdio.h> 

int main (void) 
{
    int weight, height;                                                         // вес в фунтах, рост в дюймах 
    
    scanf ("%d %d", &weight, &height);
    if (weight <= 80 && height <= 180){
        if (height >= 160)
        
            printf ("Baш вес слишком мал для вашего роста.\n");
        else if (height < 160)
            printf ("Baш вес мал для вашего роста.\n");
    }        
    else if (weight > 80 && height > 180){
        if ( height > 180 && height < 190)
        
            printf ("Baш рост мал для вашего веса.\n");
        else if (height >= 190)
            printf ("У вас идеальный вес.\n");
    }
    return 0; 
    
    
}