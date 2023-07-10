#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

void * opne_file ()
{
    FILE * fp_bufer;
                            
    if ((fp_bufer = fopen ("Colossus_Airlines.dat", "r + b")) == NULL) 
    {
        fputs ("He удается открыть файл Colossus_Airlines.dat\n", stderr);
        exit (ONE_FLAG);
    }
    
    rewind (fp_bufer);
    
    return fp_bufer;
}

void skip ()
{
    while (getchar () != '\n')
        continue; 
}

struct colossus_airlines ** in_malloc (int air, int place)
{
    struct colossus_airlines ** arr;
    
    arr = (struct colossus_airlines **) malloc (air * sizeof(struct colossus_airlines *));
    for (int i = 0; i < air; i++)
        arr [i] = (struct colossus_airlines *) malloc (place * sizeof(struct colossus_airlines));
    
    return arr;
}

void initializing(struct colossus_airlines** air_plase)
{
    
    for (int i = 0; i < AIR; i++)
        for (int j = 0; j < PLACE; j++)
        {
            switch (i)
            {
                case 0:
                    air_plase[i][j].air_lines = 102;
                    break;
                case 1:
                    air_plase[i][j].air_lines = 311;
                    break;
                case 2:
                    air_plase[i][j].air_lines = 444;
                    break;
                case 3:
                    air_plase[i][j].air_lines = 519;
                    break;
            }
            
            strcpy (air_plase[i][j].lastname, "No");
            strcpy (air_plase[i][j].name, "No");
            air_plase[i][j].nomber_place = j + 1;
            air_plase[i][j].flag_reserv = false;
        }
}


int main_menu ()
{
    auto char ch;
    
    printf ("Для выбора авиарейса введите буквееное обзночение пунка:\n");
    printf ("а)Рейс 102\n");
    printf ("Ь)Рейс 311\n");
    printf ("с)Рейс 444\n");
    printf ("d)Рейс 519\n");
    printf ("f)Выйти из программы\n");
    scanf ("%c", &ch);
    
    skip ();  
    
    
    switch (ch)
    {
        case 'a':
            return 0;
        case 'b':
            return 1;
        case 'c':
            return 2;
        case 'd':
            return 3;
        case 'f':
            return 4;
    }
}

char menu ()
{
    auto char ch;
    
    printf ("Для выбора функции введите ее буквенное обозначение:\n");
    printf ("а)Показать количество свободных мест\n");
    printf ("Ь)Показать список пустых свободных мест\n");
    printf ("с)Показать алфавитный список занятых мест\n");
    printf ("d)Назначить пассажиру место\n");
    printf ("е)Удалить назначение места\n");
    printf ("f)Выйти в главное меню\n");
    scanf ("%c", &ch);
    
    skip ();  
    return ch;
}

void fre_plase (struct colossus_airlines ** air_plase, int flag_main_menu)
{
    static int flag_fre_plase, flag_fre_plase_local;
    
    for (int i = 0; i < AIR; i++)
        for (int j = 0; j < PLACE; j++)
            if (strcmp (air_plase[i][j].lastname, "No") == 0)
                flag_fre_plase++;
    
    for (int i = 0; i < PLACE; i++)
        if (strcmp (air_plase[flag_main_menu][i].lastname, "No") == 0)
            flag_fre_plase_local++;
    
    printf ("Всего свободных мест: %d\n", flag_fre_plase);
    printf ("Свободныйх мест на рейсе - %d: %d\n", air_plase[flag_main_menu][OK_CODE].air_lines, flag_fre_plase_local);
}

void fre_plase_lest (struct colossus_airlines ** air_plase, int flag_main_menu)
{
    auto char str [MAX_STR_SIZE];
    
    
    for (int i = flag_main_menu; i < AIR;)
    {
        printf ("Фамиля|Имя|Место|Бронь|| Рейс - %d\n", air_plase[i][OK_CODE].air_lines);
            for (int j = 0; j < PLACE; j++)
                if (strcmp (air_plase[i][j].lastname, "No") == 0)
                    printf ("%s | %3s | %3d | %3d\n", air_plase[i][j].lastname, air_plase[i][j].name, air_plase[i][j].nomber_place, air_plase[i][j].flag_reserv);
    
    printf ("Введите < или > для переключения между рейсами и stop для возвращения.\n");
    scanf ("%s", str);
    skip ();
    
    if (strcmp (str, ">") == 0 && i < AIR - 1)
        i++;
    if (strcmp (str, "<") == 0 && i > OK_CODE)
        i--;
    if (strcmp (str, "stop") == 0)
        i += AIR;
    }
}

void des_a_loc (struct colossus_airlines ** air_plase, int flag_main_menu)
{
    int number, bool_bufer;
    
    
    printf ("Введите номер места: ");
    scanf ("%d", &number);
    skip ();
    
    if (number <= PLACE && OK_CODE < number)
    {
        printf ("Введите фамилию пасажира: ");
        scanf ("%s", air_plase[flag_main_menu][number - 1].lastname);
        printf ("Введите имя пасажира: ");
        scanf ("%s", air_plase[flag_main_menu][number - 1].name);
        printf ("Введите бронь (если бронировано 1 или 0 соответсвенно): ");
        scanf ("%d", &bool_bufer);
        air_plase[flag_main_menu][number - 1].flag_reserv = bool_bufer;
        skip ();
    }
    else 
        printf ("Некоректный ввод");
}

void del_a_loc (struct colossus_airlines ** air_plase, int flag_main_menu)
{
    static int number;
    
    printf ("Введите номер места: ");
    scanf ("%d", &number);
    skip ();
    
    if (number <= PLACE && OK_CODE < number)
    {
        strcpy (air_plase[flag_main_menu][number - 1].lastname, "No");
        strcpy (air_plase[flag_main_menu][number - 1].name, "No");
        air_plase[flag_main_menu][number - 1].flag_reserv = false;
    }
    else 
        printf ("Некоректный ввод");
}

void sort (struct colossus_airlines ** air_plase, int flag_main_menu)
{
    struct colossus_airlines bufer_struct;
    
    for(int i = 1; i < PLACE; i++)
        for(int j = 0; j < PLACE - i; j++)
            if(strcmp (air_plase[flag_main_menu][j].lastname, air_plase[flag_main_menu][j + 1].lastname) > 0)
            {
                bufer_struct = air_plase[flag_main_menu][j];
                air_plase[flag_main_menu][j] = air_plase[flag_main_menu][j + 1];
                air_plase[flag_main_menu][j + 1] = bufer_struct;
            }
    
    printf ("Фамиля         Имя      Место Бронь\n");
    for (int i = 0; i < 12; i++)
        if (strcmp (air_plase[flag_main_menu][i].lastname, "No") != 0)
            printf ("%s | %3s | %3d | %3d\n", air_plase[flag_main_menu][i].lastname, air_plase[flag_main_menu][i].name, 
            air_plase[flag_main_menu][i].nomber_place, air_plase[flag_main_menu][i].flag_reserv);
    
}

void save_data_file (struct colossus_airlines ** air_plase, FILE * fp)
{
    int size = sizeof (struct colossus_airlines);
    rewind (fp);
    fwrite (&air_plase [OK_CODE] [OK_CODE], size, PLACE, fp);
    fwrite (&air_plase [1] [OK_CODE], size, PLACE, fp);
    fwrite (&air_plase [2] [OK_CODE], size, PLACE, fp);
    fwrite (&air_plase [3] [OK_CODE], size, PLACE, fp);
    
}

void dowlnd_data_file (struct colossus_airlines ** air_plase, FILE * fp)
{
    rewind (fp);
    int size = sizeof (struct colossus_airlines);
    for (int i = 0; i < AIR; i++){
        for (int j = 0; j < PLACE; j++)
            fread (&air_plase [i][j], size, 1, fp);
    }
    
    rewind (fp);
}

void arr_of (struct colossus_airlines ** arr)
{
    for (int i = 0; i < AIR; i++)
        free(arr[i]);
    free(arr);
}