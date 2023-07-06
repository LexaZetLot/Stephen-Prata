#define MAX_NAME_ZISE 30
#define GRADE 3
#define CSIZE 4
#define START_INTERACTION 0
#define OK_CODE 0

struct name
{
    char lastname [MAX_NAME_ZISE];
    char name [MAX_NAME_ZISE];
};

struct student
{
    struct name names;
    double grade [GRADE];
    double mid;
};

void input (struct student * pt);
void mid_score (struct student * pt);
void print (struct student * pt);
void mid_pol (struct student * pt);