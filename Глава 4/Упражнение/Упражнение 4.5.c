#include <stdio.h>
#define BOOK "Война и мир "

int main ( void)
{
float cost = 12.99;
float percent = 80.0; 
printf("Этот экземпляр книги %s стоит $ %.2f.\nЭто %.0f%% от цены прайс-листа.", BOOK, cost, percent);
return 0;
}