#include <string.h>

typedef struct lens                                                             /*дескриптор структуры lens*/
{
    float foclen;                                                               /*фокусное расстояние в миллиметрах*/
    float fstop;                                                                /*диафрагма */
    char brand [30];                                                            /*марка производителя*/
}LENS; 

int main (void)
{
    //LENS linz [10];
    
    //linz [2].foclen = 500.0f;
    //linz [2].fstop = 2.0f;
    //strcpy (linz [2].brand, "Remarkatar");
    
    LENS linz [10] = {[2] = {500.0f, 2.0f, "Remarkatar"}};
    return 0;
}
