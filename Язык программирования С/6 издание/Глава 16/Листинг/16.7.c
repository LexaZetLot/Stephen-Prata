//names_st.c -- определение функции для names_st

#include <stdio.h>
#include "names_st.h"                                                           //включение заголовочного файла

//определения функций
void get_names (names * pn)
{
    int i;
    
    printf ("Введите свое имя: ");
    s_gets (pn->first, SLEN);
    
    printf("Введите свою фамилию: ");
    s_gets(pn->last, SLEN);
}

void show_names (const names * pn)
{
    printf ("%s %s", pn -> first, pn -> last);
}

char * s_gets (char * st, int n)
{
    char * ret_val;
    char * find;
    int i = 0;
    
    ret_val = fgets (st, n, stdin);
    if (ret_val)
    {
        find = strchr (st, '\n');                                               //поиск символа новой строки
        if (find)                                                               //если адрес не является NULL,
            * find = '\0';                                                      //поместить туда нулевой символ
        else
            while (getchar() != '\n')
                continue;                                                       //отбросить остаток строки
    }
    return ret_val;
}