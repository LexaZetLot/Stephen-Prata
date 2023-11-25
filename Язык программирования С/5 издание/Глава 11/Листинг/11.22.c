/*сору2.с -- демонстрационная программа использования функции strcpy ()*/

#include <stdio.h>
#include <string.h>                                                             /*объявление функции strcpy ()*/

#define WORDS "beast"
#define SIZE 40

int main(void)
{
    const char * orig = WORDS;
    char copy [SIZE] = "Ве the best that you can Ье.";
    char * ps;
    
    puts (orig); 
    puts (copy); 
    ps = strcpy (copy + 7, orig);
    puts (copy);
    puts (ps); 

    return 0;
}
