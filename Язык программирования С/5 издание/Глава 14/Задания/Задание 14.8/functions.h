#include <stdbool.h>

#define MAX_STR_SIZE 40
#define PLACE 12
#define OK_CODE 0
#define ONE_FLAG 1

struct colossus_airlines
{
    char name [MAX_STR_SIZE];
    char lastname [MAX_STR_SIZE];
    int nomber_place;
    bool flag_reserv;
};

void dowlnd_data_file (struct colossus_airlines * air_plase, FILE * fp);
void skip ();
void fre_plase (struct colossus_airlines * air_plase);
void * opne_file ();
char menu ();
void initializing (struct colossus_airlines * air_plase);
void fre_plase_lest (struct colossus_airlines * air_plase);
void des_a_loc (struct colossus_airlines * air_plase);
void del_a_loc (struct colossus_airlines * air_plase);
void sort (struct colossus_airlines * air_plase);
void save_data_file (struct colossus_airlines * air_plase, FILE * fp);