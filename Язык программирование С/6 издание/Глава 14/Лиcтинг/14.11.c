/*complit.c -- составные литералы*/

#include <stdio.h>

#define МAXTITL 41
#define МAXAUTL 31

struct book                                                                     //шаблон структуры: book - дескриптор
{
    char title [МAXTITL];
    char author [MAXAUTL];
    float value;
};

int main (void)
{
    struct book readfirst;
    int score;
    
    printf ("Введите рейтинг: ");
    scanf ("%d", &score);
    
    if (score >= 84)
        readfirst = (struct book)
                                {
                                    "Преступление и наказания",
                                    "Фёдор Доcтоевский",
                                    9.99
                                };
    else
        readfirst = (struct book) 
                                {
                                    "Красивая шляпа мистера Баунси",
                                    "Фред Уинсом",
                                    5.99
                                };
    
    printf ("Назначенные вами рейтинги:\n");
    printf ("%s Ьу %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);
    
    return 0; 
}