#include <stdio.h>

int main (void)
{                                                                               /* строка 3 */
    int i, j, list[10];                                                         /* строка 4 */

    for (i = 0; i < 10; i++)                                                    /* строка 6 */
    {                                                                           /* строка 7 */
        list[i] = 2 * i + 3;                                                    /* строка 8 */
        
        for (j = 0; j < i; j++)                                                 /* строка 9 */
            printf ("%d", list[j]);                                             /* строка 10 */
        
        printf ("\n");                                                          /* строка 11 */
    }                                                                           /* строка 12 */ 
    return 0;
}