/*enum.c -- использование перечислимых значений*/ 

#include <stdio.h>
#include <string.h>                                                             //для strcmp(), strchr()
#include <stdbool.h>                                                            //средство С99

#define LEN 30

char * s_gets (char * st, int n);

enum spectrum {red, orange, yellow, green, bluе, violet};

const char * colors [] = {"red", "orange", "yellow",
                          "green", "bluе",  "violet"};

int main (void)
{
    char choice [LEN];
    enum spectrum color;
    bool color_is_found = false;
    
    puts ("Введите цвет (или пустую строку для выхода):");
    
    while (s_gets (choice, LEN) != NULL && choice [0] != '\0')
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
            printf ("Цвет %s не известен.\n", choice);
        
        color_is_found = false;
        puts ("Введите следукщий цвет (или пустую строку для выхода):");
    }
    
    puts ("Программа завершена.");
    
    return 0;
}

char * s_gets (char * st, int n)
{
    char * ret_val;
    char * find;
    int i = 0;
    
    ret_val = fgets (st, n, stdin);
    if (ret_val)
    {
        find = strchr (st, '\n');                                               //поиск символа новой строки
        if (find)                                                               //если адрес не является NULL,
            * find = '\0';                                                      //поместить туда нулевой символ
        else
            while (getchar() != '\n')
                continue;                                                       //отбросить остаток строки
    }
    return ret_val;
}