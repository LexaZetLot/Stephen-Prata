#include <stdio.h>
#define В "ЬооЬоо"
#define Х 10

int main (void)
{
    int age, xp;
    char name[40];

    printf("Bвeдитe свое имя, ");
    scanf("%s", name);
    printf("Xopoшo, %s, а сколько вам лет?\n", name);
    scanf ("%d", &age);
    
    xp = age + Х;

    printf("Неужели, %s! Вам должно быть, по меньшей мере,\
%d лет.\n", В, xp);
    
    return 0;
}