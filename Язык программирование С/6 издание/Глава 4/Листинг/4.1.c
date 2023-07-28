// talkback.c - довольно настырная информативная программа
#include <stdio.h>
#include <string.h>             //для прототипа функции strlen ()
#define DENSITY 62.4            // плотность человека в фунтах на кубический фут

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];              //name представляет собой массив из 40 символов
    
    printf("Здравс твуйте! Как вас зовут?\n");
    scanf ("%s", name);
    printf ("%s, сколько вы весите в фунтах?\n", name);
    scanf ("%f", &weight); 
    
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    
    printf ("Xopoшo, %s, ваш объем составляет %2.2f кубических футов.\n", name, volume);
    printf ("К тому же ваше имя состоит из %d символов,\n", letters);
    printf ( "и мы располагаем %d байтами для его сохранения.\n", size);

    return 0;
}