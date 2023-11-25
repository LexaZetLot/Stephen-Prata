typedef struct x_y
{
    double x;
    double y;
} coordinates;

typedef struct mod_r
{
    double mod;
    double a;
} polar;

coordinates * circulation (polar * in_struct);