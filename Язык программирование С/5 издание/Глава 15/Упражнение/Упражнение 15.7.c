struct Tinkerbell
{
    unsigned int disk_drive         : 2;
    unsigned int                    : 1;
    unsigned int wire_count         : 2;
    unsigned int                    : 1;
    unsigned int hdd                : 2;
    
};
struct Klinkerbell
{
    unsigned int hdd                : 2;
    unsigned int                    : 1;
    unsigned int wire_count         : 2;
    unsigned int                    : 1;
    unsigned int disk_drive         : 2;
};


#include <stdio.h>

int main()
{
    return 0;
}