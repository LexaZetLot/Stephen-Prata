/* letheadl.c */ 

#include <stdio.h>

#define NАМЕ "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, СА 94904"
#define WIDTH 40 

void starbar (void);                                                            /* прототип функции */

int main (void)
{
    starbar ();
    printf ( "%s\n", NАМЕ);
    printf ( "%s\n", ADDRESS);
    printf ( "%s\n", PLACE); 
    starbar ();                                                                 /* использование функции */
}

void starbar (void)                                                             /* определение функции */
{
    int count;
    for (count = 1; count <= WIDTH; count++)
        putchar ('*');
    putchar ('\n');
}