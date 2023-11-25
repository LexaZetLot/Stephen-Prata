#include <stdio.h>

struct maunt 
{
    char name_mount [17];
    char abb_mount [7];
    int day;
    int nomber;
};
int fday_a_go (int nomber);

int main (void)
{
    
    
    printf ("%d", fday_a_go (10));
    return 0;
}
struct maunt maunts [12] = 
    {
        {"Январь", "янв", 31, 1},
        {"Февраль", "фев", 28, 2},
        {"Март", "мар", 30, 3},
        {"Апрель", "апр", 31, 4},
        {"Май", "май", 30, 5},
        {"Июнь", "июн", 31, 6},
        {"Июль", "июл", 30, 7},
        {"Август", "авг", 31, 8},
        {"Сентябрь", "сен", 30, 9},
        {"Октябрь", "окт", 31, 10},
        {"Ноябрь", "ноя", 30, 11},
        {"Декабрь", "дек", 31, 12}
    };


int fday_a_go (int nomber)
{
    int sum = 0;
    
    for (int i = nomber; i < 12 ; i++)
        sum += maunts [i].day;

    
    
    return (sum);
}