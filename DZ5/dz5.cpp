
int is_dz5 (int a, int b)
{
    while( a != b)
    {
        if ( a > b )
        a = a - b;
        else b = b - a;
    }
    return a;
}
