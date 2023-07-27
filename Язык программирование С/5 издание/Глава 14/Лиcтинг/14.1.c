/*book.c -- каталог для одной книги*/

#include <stdio.h> 
#define МAXTITL 41                                                              /*максимальная длина названия + 1 */
#define МAXAUTL 31                                                              /*максимальная длина имени автора + 1 */

struct book                                                                     /*шаблон структуры: дескриптором является book*/
{
    char title [МAXTITL];
    char author [МAXAUTL];
    float value;
};                                                                              /*конец шаблона структуры*/ 

int main (void)
{
    struct book library;                                                        /*объявить библиотеку как переменную типа book*/ 
    
    printf ("Bвeдитe название книги.\n");
    gets (library.title);                                                       /*доступ к разделу названия книги*/
    printf ("Teпepь введите ФИО автора.\n");
    gets (library.author);
    printf ("Teпepь введите цену.\n"); 
    scanf ("%f", &library.value);
    printf ("%s от %s: $%.2f\n", library.title, library.author, library.value);
    printf ("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    printf ("Гoтoвo.\n");
    
    return 0;
}