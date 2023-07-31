/*fields.c -- определение и использование полей */ 

#include <stdio.h> 
#include <stdbool.h>                                                            // С99, определение bool, true, false

/*стили линии*/
#define SOLID 0
#define DOTTED 1
#define DASHED 2 

/*основные цвета*/ 
#define BLUE 4 
#define GREEN 2 
#define RED 1 

/*смешанные цвета*/
#define BLACK 0 
#define YELLOW (RED | GREEN)
#define МAGENTA (RED | BLUE) 
#define CYAN (GREEN | BLUE) 
#define WHITE (RED | GREEN | BLUE) 

const char * colors [8] = {"черный", "красный", "зеленый", "желтый", "синий", "пурпурный", "голубой", "белый"};

struct box_props 
{ 
    bool opaque                 : 1;                                            //или unsigned int (до С99)
    unsigned int fill_color     : 3;
    unsigned int                : 4;
    bool show_border            : 1;                                            //или unsigned int (до С99)
    unsigned int border_color   : 3;
    unsigned int border_style   : 2;
    unsigned int                : 2;
};

void show_settings (const struct box_props * pd);

int main (void)
{
    /*создание и инициализация структуры box_props*/
    struct box_props Ьох = {true, YELLOW, true, GREEN, DASHED};
    
    printf ("Иcxoдныe параметры окна: \n");
    show_settings (&Ьох);
    
    Ьох.opaque = false;
    Ьох.fill_color = WHITE;
    Ьох.border_color = МAGENTA;
    Ьох.border_style = SOLID;
    
    printf ("\nИзмененные настройки окна:\n");
    show_settings (&Ьох);
    
    return 0;
}

void show_settings (const struct box_props * рb)
{
    printf ("Окно %s.\n", рb -> opaque == true? "непрозрачно": "прозрачно");
    printf ("Цвeт фона %s.\n", colors [рb -> fill_color]);
    printf ("Paмкa %s.\n", рb -> show_border == true? "отображается": "не отображается");
    printf ("Цвет рамки %s.\n", colors [рb -> border_color]);
    printf ("Стиль рамки");
    
    switch (рb -> border_style)
    {
        case SOLID:
            printf ("cплoшнoй. \n");
            break;
        case DOTTED:
            printf ("пунктирный.\n");
            break;
        case DASHED:
            printf ("штpиxoвoй.\n");
            break;
        default:
            printf ("неизвестный.\n");
    }
}