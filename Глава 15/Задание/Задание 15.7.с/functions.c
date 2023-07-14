#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

const char * colors [3]  = {"влево", "по центру", "вправо"};

void skip ()
{
    while (getchar () != '\n')
        continue; 
}

void print (unsigned int x)
{
    static unsigned int bufer;
    
    printf ("   ИД    РАЗМЕР    ВЫРАВНИВАНИЕ     Ж      К     Ч\n");
    bufer = x & MASK_FONT;
    printf ("   %u", bufer);
    bufer = x & MASK_SIZE_FONT;
    bufer >>= 8;
    printf ("        %u", bufer);
    bufer = x & MASK_ALIGMENT;
    bufer >>= 15;
    printf ("       %s", colors [bufer]);
    bufer = x & MASK_BOLD;
    bufer >>= 17;
    printf ("        %u", bufer);
    bufer = x & MASK_ITALICS;
    bufer >>= 18;
    printf ("      %u", bufer);
    bufer = x & MASK_EMPHASIZED;
    bufer >>= 19;
    printf ("     %u\n", bufer);
}

void menu_setap (unsigned int * x)
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
            *x &= REV_MASK_FONT; 
            printf ("Введите тип шрифта (0 - 255): ");
            scanf ("%u", &bufer);
            *x |= bufer;
            break;
        case 's':
            *x &= REV_MASK_SIZE_FONT;
            printf ("Введите размер шрифта (0 - 127): ");
            scanf ("%u", &bufer);
            bufer <<= 8;
            *x |= bufer;
            break;
        case 'a':
            *x &= REV_MASK_MASK_ALIGMENT;
            printf ("Выберете вфравнивание\n");
            printf ("l) влево       с) по центру        r) вправо \n");
            //skip ();
            scanf ("%c", &ch);
            switch (ch)
            {
                case 'l':
                    bufer <<= 15;
                    bufer = 0;
                    *x |= bufer;
                    break;
                case 'c':
                    bufer <<= 15;
                    bufer = 1;
                    *x |= bufer;
                    break;
                case 'r':
                    bufer <<= 16;
                    bufer = 1;
                    *x |= bufer;
                    break;
            }
            break;
        case 'b':
            *x &= REV_MASK_MASK_BOLD;
            printf ("Введите параметр полужирности (0 - 1): ");
            scanf ("%u", &bufer);
            bufer <<= 17;
            *x |= bufer;
            break;
        case 'i':
            *x &= REV_MASK_MASK_ITALICS;
            printf ("Введите параметр курсива (0 - 1): ");
            scanf ("%u", &bufer);
            bufer <<= 18;
            *x |= bufer;
            break;
        case 'u':
            *x &= REV_MASK_MASK_EMPHASIZED;
            printf ("Введите параметр подчеркивания (0 - 1): ");
            scanf ("%u", &bufer);
            bufer <<= 19;
            *x |= bufer;
            break;
        case 'q':
            exit (0);
            break;
    }
}