/*dualview.c -- разрядные поля и поразрядные операции*/

#include <stdio.h>

/*КОНСТАНТЫ РАЗРЯДНЫХ ПОЛЕЙ */
/*свойства прозрачности и видимости*/
#define YES         1
#define NO          0
/*стили линии*/ 
#define SOLID       0
#define DOTTED      1
#define DASHED      2 
/*основные цвета*/ 
#define BLUE        4
#define GREEN       2
#define RED         1 
/*смешанные цвета*/
#define BLACK       0
#define YELLOW (RED | GREEN)
#define МAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

/*разрядные константы*/
#define OPAQUE 0x1
#define FILL_BLUE 0x8 
#define FILL_GREEN 0x4
#define FILL_RED 0х2 
#define FILL_МАSК 0xE 
#define BORDER 0x100
#define BORDER_BLUE 0х800
#define BORDER_GREEN 0х400 
#define BORDER_RED 0x200 
#define BORDER_МАSК 0хЕ00 
#define В_SOLID 0
#define В_DOTTED 0x1000
#define В_DASHED 0x2000
#define STYLE_МАSК 0x3000 

const char * colors [8]  = {"черный", "красный", "зеленый", "желтый", "синий", "пурпурный", "голубой", "белый"};

struct bох_props 
{
    unsigned int opaque            : 1;
    unsigned int fill_color        : 3;
    unsigned int                   : 4;
    unsigned int show_border       : 1;
    unsigned int border_color      : 3;
    unsigned int border_style      : 2;
    unsigned int                   : 2;
};

union Views                                                                     /*просмотр данных в виде структуры или переменной типа unsigned short*/ 
{
    struct bох_props st_view;
    unsigned int ui_view;
};

void show_settings (const struct bох_props * рb);
void show_settings1 (unsigned short);
char * itobs (unsigned int n, char * ps); 

int main (void) 
{
    /*создание объекта Views, инициализация структуры bох типа View*/
    union Views bох = {{ YES, YELLOW, YES, GREEN, DASHED}};
    char bin_str [8 * sizeof (unsigned int) + 1];
    
    printf ("Иcxoдныe параметры окна:\n");
    show_settings (&bох.st_view);
    printf ("\nПpocмoтp параметров окна с помощью переменной типа unsigned int:\n");
    show_settings1 (bох.ui_view);
    printf ("комбинация разрядов: %s\n", itobs (bох.ui_view, bin_str));
    
    bох.ui_view &= FILL_МАSК;                                                   /*отключение разрядов цвета фона*/
    bох.ui_view |= (FILL_BLUE | FILL_GREEN);                                    /*переустановка цвета фона*/
    bох.ui_view ^= OPAQUE;                                                      /*переключ ение свойства прозрач ности*/
    bох.ui_view |= BORDER_RED;                                                  /*неправильный подход*/
    bох.ui_view &= ~STYLE_МАSК;                                                 /*очистка разрядов стиля*/
    bох.ui_view |=  В_DOTTED;                                                   /*установка пунктирного стиля*/
    
    printf ("\nИзмен енные параметры окна:\n");
    show_settings (&bох.st_view);
    printf ("\nПросмотр параметров окна с помощью переменной типа unsigned int:\n");
    show_settings1 (bох.ui_view);
    printf ("комбинация разрядов:%s\n", itobs (bох.ui_view, bin_str));
    
    return 0;
}


void show_settings (const struct bох_props * pb)
{
    printf ("Фон %s.\n", pb -> opaque == YES? "непрозрачный" : "прозрачный");
    printf ("Цвeт фона %s.\n", colors [pb -> fill_color]);
    printf ("Paмкa %s.\n", pb -> show_border == YES? "видима" : " невидима");
    printf ("Цвeт рамки %s.\n", colors [pb -> border_color]);
    printf ("Стиль линии рамки");
    
    switch (pb -> border_style)
    {
        case SOLID: 
            printf ("cплowнoй.\n"); 
            break;
        case DOTTED:
            printf ("пунктирньм.\n"); 
            break;
        case DASHED: 
            printf ("штpиxoвoй.\n"); 
            break;
        default: 
            printf ("неизвестный тип.\n");  
    }
}


void show_settings1 (unsigned short us)
{
    printf ("Фон %s.\n", us & OPAQUE == OPAQUE ? "непрозрачньм" : "прозрачньм");
    printf ("Цвeт фона %s.\n", colors [(us >> 1) & 07]);
    printf ("Paмкa %s.\n", us & BORDER == BORDER? "видимая" : "невидимая");
    printf ("Стиль линии рамки");
    
    switch (us & STYLE_МАSК)
    {
        case В_SOLID: 
            printf ("cплowнoй.\n"); 
            break;
        case В_DOTTED: 
            printf ("пунктирньм.\n"); 
            break ;
        case В_DASHED: 
            printf ("штpиxoвoй.\n"); 
            break;
        default: 
            printf ("неизвестньм тип.\n"); 
    }
    
    printf ("Цвeт рамки %s.\n", colors [(us >> 9) & 07]);
}


/*преобразование типа int в строку двоичных цифр*/
char * itobs (unsigned int n, char * ps)
{
    int i;
    static int size = 8 * sizeof (unsigned int); 
    
    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps [i] = (01 & n) + '0';
    
    ps [size] = '\0';

    return ps; 
}