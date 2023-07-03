#include <stdio.h>
#include <string.h>

int main ( void)
{
float rost;
char name[15];


printf("Ввидите ваше имя и рост: ");
scanf("%s %f", name, &rost);
printf("%s, ваш рост %.2f", name, rost);

return 0;
}