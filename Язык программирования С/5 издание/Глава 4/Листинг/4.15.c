//input.c - - когда исполь зовать знак & 

#include <stdio.h>

int main(void)
{
    int age;                                                                    // переменная
    float assets;                                                               // переменная
    char pet[30];                                                               // строка
    
    printf ("Bвeдитe информацию о своем возрасте, о сумме в банке и о любимом животном.\n");
    scanf ("%d %f", &age, &assets);                                             // используйте знак &
    scanf ("%s", pet);                                                          // неиспользуйте & для строкового массива
    printf ("%d $%.2f %s\n", age, assets, pet); 
    
    return 0;
}