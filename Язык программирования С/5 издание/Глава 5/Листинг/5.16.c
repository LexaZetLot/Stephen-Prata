// running.c -- программа, полезная для тех, кто занимается бегом 
#include <stdio.h>
const int S_PER_М = 60;                                                         // количество с екунд в мину те
const int S_PER_Н = 3600;                                                       // количество с екунд в часе
const double M_PER_K = 0.62137;                                                 // количество миль в километре 

int main(void)                                                                  
{       
    
    double distk, distm;                                                        // дистанция пробег а в километрах и милях
    double rate;                                                                // средняя скорость в милях в час
    int min, sec;                                                               // время пробега в минутах и секундах
    int time;                                                                   // время пробега только в с екундах
    double mtime;                                                                // время пробега одной мили в секундах 
    int mmin, msec;                                                             // время пробега одной мили в минутах и секундах
    
    printf ("Этa программа пересчитывает время пробега дистанции в метрической системе\n"); 
    printf ("вo время пробега одной мили и вычисляет вашу среднюю\n"); 
    printf ("скopocть в милях в час.\n");
    printf ("Bвeдитe дистанцию пробега в километрах.\n");
    scanf ("%lf", &distk);                                                      // %lf для типа double
    printf ("Дaлee введите время в минутах и секундах.\n");
    printf ("Haчнитe с ввода минут.\n");
    scanf ("%d" , &min);
    printf ("Teпepь введите секунды.\n");
    scanf ("%d", &sec);
    // переводит время в секунды
    time = S_PER_М * min + sec;
    // переводит километры в мили
    distm = M_PER_K * distk;
    // мили в секунду умножить на секунды в час = колич ество миль в час
    rate = distm / time * S_PER_М;
    // время/расстояние = время про бега одной мили
    mtime = (double) time / distm;
    mmin = (int) mtime / S_PER_М;                                               // вычисление полного количества минут
    msec = (int) mtime % S_PER_М;                                               // вычuисление остатка в секундах
    printf ("Bы про бежали %1.2fкм (%1.2fмили) за %dмин, %dсек.\n " , distk , distm, min, sec);
    printf ("Taкaя скорость соответствует пробег у одной мили за %d мин,", mmin);
    printf ("%d sec.\nBaшa средняя скорость равнялась %1.2f миль в час . \n " ,msec, rate);
    
    return 0;
}