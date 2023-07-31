/*book.c -- каталог для одной книги*/

#include <stdio.h> 

#define МAXTITL 41                                                              /*максимальная длина названия + 1 */
#define МAXAUTL 31                                                              /*максимальная длина имени автора + 1 */

char * s_gets (char * st, int n);

struct book                                                                     /*шаблон структуры: дескриптором является book*/
{
    char title [МAXTITL];
    char author [МAXAUTL];
    float value;
};                                                                              /*конец шаблона структуры*/ 

int main (void)
{
    struct book library;                                                        /*объявление library в качестве переменной типа book*/ 
    
    printf ("Bвeдитe название книги.\n");
    s_gets (library.title, МAXAUTL);                                            /*доступ к разделу названия книги*/
    printf ("Teпepь введите ФИО автора.\n");
    s_gets (library.author, МAXAUTL);
    printf ("Teпepь введите цену.\n"); 
    scanf ("%f", &library.value);
    printf ("%s авторство %s: $%.2f\n", library.title, library.author, library.value);
    printf ("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    printf ("Гoтoвo.\n");
    
    return 0;
}

char * s_gets (char * st, int n)
{
    char * ret_val;
    int i = 0;
    
    ret_val = fgets (st, n, stdin);
    if (ret_val)                                                                //т.е. ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0') 
            i++;
        if (st [i] == '\n')
            st [i] = '\0';
        else                                                                     //требуется наличие words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}