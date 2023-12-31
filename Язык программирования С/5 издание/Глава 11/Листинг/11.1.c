//strings.c -- коллекционирование пользователей 

#include <stdio.h>

#define MSG "вы должны обладать многими талантами. Назовите некоторые."         //константа символьной строки
#define LIM 5
#define LINELEN 81                                                              //максимальная длина строки + 1 

int main(void)
{
    char name [LINELEN];
    char talents [LINELEN];
    int i;
    
    const char m1 [40] = "Постарайтесь уложиться в одну строку.";               //инициализация массива значений типа char заданной размерности
    const char m2 [] = "Если вам ничего не приходит в голову, придумайте что-нибудь.";  //пусть компилятор сам вычислит размеры массива 
    const char *m3 = "\nBce, о себе достаточно , а вас как зовут? ";            //инициализация указателя
    
    const char *mytal [LIM] =                                                   //инициализация массива указателей на строку массив из 5 указателей
    {
        "Мгновенное складывание чисел", 
        "Точное умножение", " Накапливание данных",
        "Исполнение инструкций с точностью до последней буквы",
        " Знание языка программирования С"
    };
    
    printf ("Здравствуйте! Я компьютер по имени Клайд. У меня масса талантов.\n");
    printf ("Ceйчac я расскажу кое-что о них.\n");
    
    puts ("Чтo у меня за таланты? Вот только частичный их перечень.");
    
    for (i = 0; i < LIM; i++)
        puts (mytal[i]);                                                        // печать талантов компьютера
    
    puts (m3);
    gets (name);
    
    printf ("Xopowo, %s, %s\n", name, MSG);
    printf ("%s\n%s \n", m1, m2);
    
    gets (talents);
    puts ("Посмотрим, есть ли у меня этот перечень:");
    puts (talents);
    
    printf ("Благодарю за информацию, %s.\n", name); 
    

    return 0;
}
