#include <stdio.h>
int main()
{
    int x = 0;
    printf( "Please enter a decimal number: " );
    scanf( "%d", &x );

    int i = 1;
    int bin = 0;
    while(x > 0)
    {
      bin += (x % 2) * i;
      x >>= 1;;
      i *= 10;
     }

     printf( "Binary number: " );
     printf( "%d", bin );
     return 0;
}
