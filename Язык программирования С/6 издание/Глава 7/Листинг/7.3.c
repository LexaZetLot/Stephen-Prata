//cypher2.c -- меняет входные данные, оставляя неизменными символы, которые не являются буквами

#include <stdio.h>
#include <ctype.h>                                                              // для доступа к isalpha ()

int main ( void)
{
    char ch;
    
    while (((ch = getchar()) != '\п')                                           
    {
        if (isalpha ( ch ))                                                     //если это буква,
            putchar (ch+ 1);                                                    // отобразить следующую букву
        else                                                                    //в противном случае
            putchar (ch);                                                       //отобразить символ как есть
        ch = getchar ( );                                                       
    }
    putchar (ch);                                                               //вывести символ новой строки
    
    return 0;
}