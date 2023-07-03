/*enum.c -- использование перечислимых значений*/ 

#include <stdio.h>
#include <string.h>                                                             //для функции strcmp ()
#include <stdbool.h>                                                            //требование стандарта С99

#define LEN 30

enum spectrum {red, orange, yellow, green, bluе, violet};

const char * colors [] = {"красный", "оранжевый", "желтый",
                          "зеленый", "голубой",  "фиолетовый"};

int main (void)
{
    char choice [LEN];
    enum spectrum color;
    bool color_is_found = false;
    
    puts ("Введите цвет (или пустую строку для выхода из программы):");
    
    while (gets (choice) != NULL && choice [0] != '\0')
    {
        for (color = red; color <= violet; color++)
            if (strcmp (choice, colors [color]) == 0)
            {
                color_is_found = true;
                break;
            }
        
        
        if (color_is_found)
            switch (color)
            {
                case red: 
                    puts ("Poзы красные.");
                    break;
                case orange:
                    puts ("Maки оранжевые.");
                    break;
                case yellow:
                    puts ("Подсолнухи желтые.");
                    break;
                case green:
                    puts ("Tpaвa зеленая.");
                    break;
                case bluе:
                    puts ("Колокольчики голубые.");
                    break;
                case violet:
                    puts ("Фиалки фиолетовые.");
                    break; 
            }
        else
            printf ("Mнe неизвестен %s цвет.\n", choice);
        
        color_is_found = false;
        puts ("Введите следукщий цвет (или пустую строку для выхода из программы):");
    }
    
    puts ("Bceгo до брого!");
    
    return 0;
}