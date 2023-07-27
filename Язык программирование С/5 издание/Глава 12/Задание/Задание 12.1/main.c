#include <stdio.h>

#define NEW_NULL 0

void critic (int *);

int main (void)
{
    int a = NEW_NULL;
    int * units = &a;
    
    printf ("Cкoлькo фунтов весит маленький бочонок меда?\n");
    scanf ("%d", &a);
    while (a != 56)
        critic (units);

    return NEW_NULL;
}

void critic (int * units)
{
    printf ("Baм не повезло. Попытайтесь еще раз.\n");
    scanf ("%d", units); 
}