//func_ptr.c -- использование указателей на функции

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 81

char showmenu (void);
void eatline (void);                                                            //читать до конца строки
void show (void (*fp) (char *), char * str);
void ToUpper (char *);                                                          //преобразовать строку к верхнему регистру
void ToLower (char *);                                                          //преобразовать строку к нижнему регистру
void Transpose (char *);                                                        //меняет местами регистры 
void Dummy (char *);                                                            //оставляет строку неизмененной
char * s_gets (char * st, int n);

int main (void)
{
    char line [LEN];
    char сору [LEN];
    char choice;
    //указывает на функцию, которая имеет аргумент типа char * и ничего не возвращает 
    void (*pfun) (char *);
    
    puts ("Введите строку (пустая строка - выход из программы):");
    while (s_gets (line, LEN) != NULL && line [0] != '\0')
    {
        while ((choice = showmenu ()) != 'n')
        {
            switch (choice)                                                     //оператор switch устанавливает указатель 
            {
                case 'u':
                    pfun = ToUpper; 
                    break;
                case 'l':
                    pfun = ToLower;
                    break;
                case 't':
                    pfun = Transpose;
                    break;
                case 'o':
                    pfun = Dummy;
                    break;
            }
            
            strcpy (сору, line);                                                //сделать копию для show ()
            show (pfun, сору);                                                  //использовать выбранную функцию
        }
        puts ("Введите строку (пустая строка - выход из программы): ");
    }
    puts ("Программа завершена.");
    
    return 0;
}


char showmenu (void)
{
    char ans;
    puts ("Введите номер выбранного элемента меню:");
    puts ("l) нижний регистр            u) верхний регистр");
    puts ("t) поменять местами регистры о) исходный регистр");
    puts ("n) следующая строка");
    
    ans = getchar ();                                                           //получить ответ
    ans = tolower (ans);                                                        //преобразовать в нижний регистр
    eatline ();                                                                 //избавиться от оставшейся части строки
    
    while (strchr ("ulton", ans) == NULL)
    {
        puts ("Пожалуйста, введите а u, 1, t, о или n:");
        ans = tolower (getchar ());
        eatline (); 
    }
    
    return ans; 
}


void eatline (void)
{
    while (getchar () != '\n')
        continue; 
}


void ToUpper (char * str) 
{
    while (* str)
    {
        * str = toupper (* str);
        str++;
    }
}


void ToLower (char * str)
{
    while (* str)
    {
        * str = tolower (* str);
        str++;
    }
}


void Transpose (char * str)
{
    while (* str)
    {
        if (islower (* str))
            * str = toupper (* str);
        else if (isupper (* str))
            * str = tolower (* str);
        str++; 
    }
}


void Dummy (char * str)
{
    //оставляет строку неизменной
}


void show (void (* fp) (char *), char * str)
{
    (*fp) (str);                                                                //применить выбранную функцию к str
    puts (str);                                                                 //отобразить результат
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