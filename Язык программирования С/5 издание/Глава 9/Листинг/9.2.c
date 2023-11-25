/* lethead2.c */

#include <stdio.h>
#include <string.h>                                                             /* для функции strlen () */ 

#define NAME "GIGATНINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, СА 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char (char ch, int num);

int main (void)
{
    int spaces; 
    
    show_n_char ('*', WIDTH);                                                   /* использование констант в качестве аргументов */
    
    putchar ('\n');
    show_n_char (SPACE, 12);                                                    /* исполь зование констант в качестве аргументов */
    
    printf ("%s\n", NAME);
    spaces = (WIDTH - strlen (ADDRESS)) / 2;
                                                                                /* Пусть прогр амма вычислит, */ 
                                                                                /* сколько про белов пропустить */
    show_n_char (SPACE, spaces);                                                /* исполь зование переменной в качестве аргумента */
    
    printf ("%s\n", ADDRESS);
    show_n_char (SPACE, (WIDTH - strlen (PLACE)) / 2);
                                                                                /* выражение в кач е стве аргумента */ 
    printf ("%s\n", PLACE );
    show_n_char ('*', WIDTH);
    putchar ('\n');
    
    return 0; 
    
    
}

/* определение функции show_n_char () */
void show_n_char ( char ch, int num)
{
    int count ;
    for ( count = 1; count <= num; count++ )
        putchar (ch) ;
}