#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

const char * colors [3]  = {"влево", "по центру", "вправо"};

void skip ()
{
    while (getchar () != '\n')
        continue; 
}

void menu (struct font_settings stru)
{
    printf ("   ИД    РАЗМЕР    ВЫРАВНИВАНИЕ     Ж      К     Ч\n");
    printf ("    %d     %d         ", stru.font, stru.size_font);
    printf ("   %s", colors [stru.alignment]);
    printf ("    %s", stru.bold == 0? "откл." : "вкл.");
    printf ("    %s", stru.italics == 0? "откл." : "вкл.");
    printf ("    %s\n", stru.emphasized == 0? "откл." : "вкл.");
}

void menu_setap (struct font_settings * stru)
{
    unsigned int bufer;
    char ch;
    printf ("f) изменить шрифт     s) изменить размер     a) изменить выравнивание\n");
    printf ("b) полужирный         i) курсив              u) подчеркнутый\n");
    printf ("q) выйти\n");
    scanf ("%c", &ch);
    
    switch (ch)
    {
        case 'f':
            printf ("Введите тип шрифта (0 - 255): ");
            scanf ("%u", &bufer);
            stru -> font = bufer;
            break;
        case 's':
            printf ("Введите размер шрифта (0 - 127): ");
            scanf ("%u", &bufer);
            stru -> size_font = bufer;
            break;
        case 'a':
            printf ("Выберете вфравнивание\n");
            printf ("l) влево       с) по центру        r) вправо \n");
            skip ();
            scanf ("%c", &ch);
            switch (ch)
            {
                case 'l':
                    stru -> alignment = 0;
                    break;
                case 'c':
                    stru -> alignment = 1;
                    break;
                case 'r':
                    stru -> alignment = 2;
                    break;
            }
            break;
        case 'b':
            printf ("Введите параметр полужирности (0 - 1): ");
            scanf ("%u", &bufer);
            stru -> size_font = bufer;
            break;
        case 'i':
            printf ("Введите параметр курсива (0 - 1): ");
            scanf ("%u", &bufer);
            stru -> size_font = bufer;
            break;
        case 'u':
            printf ("Введите параметр подчеркивания (0 - 1): ");
            scanf ("%u", &bufer);
            stru -> size_font = bufer;
            break;
        case 'q':
            exit (0);
            break;
    }
}