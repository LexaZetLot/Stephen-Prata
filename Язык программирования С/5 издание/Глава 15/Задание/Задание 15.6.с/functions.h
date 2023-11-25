intstruct font_settings 
{
    unsigned int font              : 8;
    unsigned int size_font         : 7;
    unsigned int bold              : 1;
    unsigned int alignment         : 2;
    unsigned int italics           : 1;
    unsigned int emphasized        : 1;
    unsigned int                   : 4;
};

void menu (struct font_settings stru);
void menu_setap (struct font_settings * stru);
void skip ();