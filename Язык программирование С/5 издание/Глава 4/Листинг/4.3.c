/* praisel.c -- использует различные представления строк */
#include <stdio.h>
#include <string.h>                                             /* предоставляет прототип strlenf() */
#define PRAISE "Какое прекрасное имя!"

int main(void)
{
    char name[40];
    
    printf("Как вас зовут?\n");
    scanf("%s", name);
    printf("Здравствуйте, %s. %s\n", name, PRAISE);
    printf("Baшe имя состоит из %ld символов и занимает %ld ячеек памяти.\n", strlen(name), sizeof name);
    printf("Хвалебная фраза содержит %ld символов", strlen (PRAISE));
    printf(" и занимает %ld ячеек памяти.\n", sizeof PRAISE);

    return 0;
}