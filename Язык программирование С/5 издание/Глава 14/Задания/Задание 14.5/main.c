#include "functions.h"

int main (void)
{
    struct student students [CSIZE]=
                                    {
                                        {
                                            {
                                                "фыва0",
                                                "dasd0"
                                            }
                                        },
                                        
                                        {
                                            {
                                                "фыва1",
                                                "dasd1"
                                            }
                                        },
                                        
                                        {
                                            {
                                                "фыва2",
                                                "dasd2"
                                            }
                                        },
                                        
                                        {
                                            {
                                                "фыва3",
                                                "dasd3"
                                            }
                                        }
                                    };
    
    struct student * pt = students;
    
    input (pt);
    mid_score (pt);
    print (pt);
    mid_pol (pt);
    
    return OK_CODE;
}