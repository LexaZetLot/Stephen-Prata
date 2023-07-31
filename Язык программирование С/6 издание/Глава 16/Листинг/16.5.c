//variadic.c -- макросы с переменным числом аргументов  

#include <stdio.h>
#include <math.h> 

#define PR(Х, ... ) printf ("Сообщение " #Х ": "  __VA_ARGS__)

int main (void)
{
    double x = 48;
    double у;
    
    у = sqrt (x);
    
    PR (1, "х = %g\n", x);
    PR (2, "х = %.2f, у = %.4f\n", x, у); 
    
    return 0;
}