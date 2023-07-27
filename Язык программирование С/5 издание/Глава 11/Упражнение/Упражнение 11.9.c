int strlen (const char * s)
{
    int ct = 0;
    
    while (*s++) 
        ct++;
    
    return (ct);
}