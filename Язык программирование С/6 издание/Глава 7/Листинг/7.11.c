/*animals.c -- использование оператора switch */

#include <stdio.h>
#include <ctype.h> 

int main (void) 
{
    char ch;
    
    printf ("Дaйтe мне букву алфавита, и я укажу вам "); 
    printf ("название животного,\n начинающееся с этой буквы.\n");
    printf ("Bвeдитe букву или # для завершения.\n"); 
    
    while ((ch = getchar ()) != '#') 
    {
        if('\n' == ch)
            continue;
        
        if (islower (ch))                                                       /*только строчные буквы */
            switch (ch)
            {
                case 'a':
                    printf ("apхар, дикий горный азиатский баран\n");
                    break;
                case 'b':
                    printf ("бaбиpycca , дикая малайская свинья\n");
                    break;
                case 'k':
                    printf ("кoaти , носуха обыкновенная \ n");
                    break;
                case 'd':
                    printf ("выxyxoль, водоплавающее существо\n");
                    break;
                case 't':
                    printf ("exиднa, игольчатый муравьед\n");
                    break;
                case 'h':
                    printf ("pыбoлoв, светло-коричневая куница\n");
                    break;
                default:
                    printf ("Вопрорс озадачил!\n");
            }                                                                   /*конец оператора выбора */
        else
            printf ("Распознаются только строчные буквы.\n" );
            
        while (getchar () != '\n')
            continue;                                                           /*пропустить оставшуюся часть входной строки */
        
        printf ("Bвeдитe следующую букву или # для завершения.\n");
    }                                                                           /*конец цикла while*/
    printf ("До свидания.\n");
    
    return 0;
}