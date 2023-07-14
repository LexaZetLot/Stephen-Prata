/*preproc.c -- простые примеры директив препроцессора*/
#include <stdio.h>
#define TWO 2                                                                   /*при желании можно использовать комментарии*/
#define OW "Логик а - последнее убежище лишенных\
вообр ажения . - Оскар Уальд"                                                   /*обратный слеш переносит  определение на следующую  cтроку*/
#define FOUR TWO * TWO
#define РХ printf ("X = %d.\n", х)
#define FMT "Х = %d.\n" 

int main (void)
{
    int х = TWO;
    
    РХ;
    х = FOUR;
    printf (FMT, х);
    printf ("%s\n", OW);
    printf ("TWO: OW\n");
    
    return 0; 
}