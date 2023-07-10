#include <stdbool.h>

#define MAX_STR_SIZE 40
#define AIR 4
#define PLACE 12
#define OK_CODE 0
#define ONE_FLAG 1

struct colossus_airlines
{
    int air_lines;
    char name [MAX_STR_SIZE];
    char lastname [MAX_STR_SIZE];
    int nomber_place;
    bool flag_reserv;
};


int main_menu ();
void dowlnd_data_file (struct colossus_airlines ** air_plase, FILE * fp);
void skip ();
struct colossus_airlines ** in_malloc (int air, int place);
void fre_plase (struct colossus_airlines ** air_plase, int flag_main_menu);
void * opne_file ();
char menu ();
void initializing (struct colossus_airlines ** air_plase);
void fre_plase_lest (struct colossus_airlines ** air_plase, int flag_main_menu);
void des_a_loc (struct colossus_airlines ** air_plase, int flag_main_menu);
void del_a_loc (struct colossus_airlines ** air_plase, int flag_main_menu);
void sort (struct colossus_airlines ** air_plase, int flag_main_menu);
void save_data_file (struct colossus_airlines ** air_plase, FILE * fp);
void arr_of (struct colossus_airlines ** arr);