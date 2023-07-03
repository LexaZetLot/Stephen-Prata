/* pound.c - - определяет функцию с одним аргументом */ 
#include <stdio.h>
void pound (int n);                                                             // прототип ANSI
int main(void)                                                                  
{       


    int times = 5;
    char ch = '!';                                                              // ASCII -кoд равен 33
    float f = 6.0f;
    
    pound (times);                                                              // аргумент типа int
    pound (ch);                                                                 // тип char автоматически приводится к типу int
    pound ((int)f);                                                             // приведение типа f -> int

   return 0;
}
void pound (int n)
{
    while (n -- > 0)
    printf ("#");
    printf ("\n"); 
}