#include <stdio.h>
char * dlina (const char * str);

int main()
{
    printf("%p", dlina ("qwer ty"));

    return 0;
}

char * dlina (const char * str)
{
    
    while (*str)
    {
        if (*str == ' ')
            return str;
        
        *str++;
    }
    
    return '\0';
}