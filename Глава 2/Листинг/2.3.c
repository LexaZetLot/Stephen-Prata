/* two_func .c - программа , и споль зующая две функции в одном файле */
#include <stdio.h> 

void butler (void);      /* прототип функции в стандарте ISO/ANSI С */
int main(void)
{
    printf ("Я вызываю дворецкого.\n");
    butler ();
    printf ("Дa. Принесите мне чай и записываемые компакт-диски.\n");
    
    return 0;
}

void butler (void)                 /* начало определения функции */
{
    printf ("Вы звонили, сэр?\n"); 
}