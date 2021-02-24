
int is_dz7 ( int x )
{
    int i = 1;
    int bin = 0;

    while(x > 0)
    {
      bin += (x % 2) * i;
      x >>= 1;;
      i *= 10;
     }
    return bin;
}
