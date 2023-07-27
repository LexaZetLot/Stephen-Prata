#include <stdio.h>
#define A(Х) printf ("имя: " #Х "; значение: %d; адрес: %p\n", Х, &Х)

int main (void)
{
    int i = 12;
    
    A(i);
    return 0;
}