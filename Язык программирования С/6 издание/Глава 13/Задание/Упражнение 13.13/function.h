#define MAX_SIZE_NAME 20

int x_arr (FILE * fp_in);
int y_arr (FILE * fp_in);

int ** arr_create (int x, int y);
void arr_wr (FILE * fp_in, int ** arr, int x, int y);
void arr_of (int ** arr, int y);
void arr_save_out (FILE * fp_out, int ** arr_main, int x, int y);