#define OK_CODE 0
#define MAX_SIZE_NAME 30
#define START_ONE 1
#define START_INTERACTION 0


struct game_man 
{
    int number;
    char name [MAX_SIZE_NAME];
    char lastname [MAX_SIZE_NAME];
    int took_the_ball;
    int kick;
    int pass;
    int run;
};

int size (FILE * fp);
struct game_man * create (int siz);
void struct_wr (FILE * fp, struct game_man * sp, int siz);
void rebuffering (struct game_man * sp, int siz);
void output (struct game_man * sp, int siz);