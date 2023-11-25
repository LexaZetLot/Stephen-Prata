/*preproc.c -- простые примеры работы с препроцессором*/

#include <stdio.h>

#define TWO 2                                                                   /*при желании можно использовать комментарии*/
#define OW "Логика - последнее убежище лишенных \
воображения. - Оскар Уальд"                                                     /*обратная косая черта переносит определение на следующую строку*/
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