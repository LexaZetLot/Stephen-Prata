// strings1.с

#include <stdio.h>

#define MSG "Я - символьная строковая константа."
#define MAXLENGTH 81

int main (void)
{
    char words [MAXLENGTH] = "Я являюсь строкой, хранящейся в массиве.";
    const char * ptl = "Что-то указывает на меня.";
    
    puts ("Вот несколько строк:");
    puts (MSG);
    puts (words);
    puts (ptl);
    words [14] = 'A';
    puts (words);

    return 0;
}