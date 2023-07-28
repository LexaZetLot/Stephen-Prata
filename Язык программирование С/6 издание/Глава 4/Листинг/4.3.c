/*praisel.c -- использует различные представления строк*/
//Если ваша реализация не распознает спецификатор %zd,
//попробуйте воспользоваться %u или %lu 
#include <stdio.h>
#include <string.h>                                             /*предоставляет прототип strlenf()*/

#define PRAISE "Вы - выдвющаяся личность."

int main(void)
{
    char name[40];
    
    printf("Как вас зовут?\n");
    scanf("%s", name);
    printf("Здравствуйте, %s. %s\n", name, PRAISE);
    printf("Baшe имя состоит из %zd символов и занимает %zd ячеек памяти.\n", strlen(name), sizeof name);
    printf("Хвалебная фраза содержит %zd символов", strlen (PRAISE));
    printf(" и занимает %zd ячеек памяти.\n", sizeof PRAISE);

    return 0;
}