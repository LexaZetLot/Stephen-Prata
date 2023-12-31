/*fgets3.c -- использование функции fgets ()*/

#include <stdio.h>

#define STLEN 10

int main (void)
{
    char words [STLEN];
    int i;
    
    puts ("Введите строки (или пустую строку для выхода из программ): ");
    while (fgets (words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        
        if (words[i] == '\n')
            words[i] = '\0';
        else                                                                    //требуется наличие words [i] == '\0'
            while (getchar () != '\n')
                continue;
        
        puts (words);
    }
    puts ("Готово.");

    return 0;
}