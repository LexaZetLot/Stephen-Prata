#include <stdio.h>
#include <string.h>

int main ( void)
{
double x1;


printf("Ввидите число с плавающей точкой: ");
scanf("%lf", &x1);
printf("Выводом является %.1lf или %.1e\n", x1, x1);
printf("Выводом является %+.3lf или %.3e", x1, x1);

return 0;
}