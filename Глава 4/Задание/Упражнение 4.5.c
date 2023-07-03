#include <stdio.h>
#include <string.h>

int main ( void)
{
int x1, x2;
char name[15];
char fam[15];


printf("Ввидите ваше имя и фамалию: ");
scanf("%s %s", name, fam);

x1 = (strlen (name) / 2);
x2 = (strlen (fam) / 2);

printf("%s ", name);
printf("%s\n", fam);
printf("%*lu ", x1, (strlen (name) / 2));
printf("%*lu\n", x2, (strlen (fam) / 2));
printf("%s ", name);
printf("%s\n", fam);
printf("%-*lu ", x1, (strlen (name) / 2));
printf("%-*lu\n", x2, (strlen (fam) / 2));
return 0;
}