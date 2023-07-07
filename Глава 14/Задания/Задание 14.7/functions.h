#include <stdbool.h>

#define MAX_STR_SIZE 40
#define PLACE 12
#define OK_CODE 0
#define ONE_FLAG 1

struct colossus_airlines
{
    int nomber_place;
    bool flag_reserv;
    char name [MAX_STR_SIZE];
    char lastname [MAX_STR_SIZE];
};

void * opne_file ();
void print_file (struct colossus_airlines * air_plase, FILE * fp);
void output_file (struct colossus_airlines * air_plase, FILE * fp);