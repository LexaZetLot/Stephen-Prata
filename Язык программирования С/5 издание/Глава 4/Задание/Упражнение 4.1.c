#include <stdio.h>

int main ( void)
{
char name[20];
char fam[20];

printf("Введите имя и фамилию\n");
scanf("%s %s", fam, name);
printf("Вашие имя: %s, ваша фамилия: %s", name, fam);

return 0;
}