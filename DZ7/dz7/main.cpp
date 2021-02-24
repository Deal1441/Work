#include <stdio.h>
#include <math.h>
#include "dz7.h"

int main()
{
    int x = 0;

    printf( "Please enter a decimal number: " );
    scanf( "%d", &x );

    int i = is_dz7 ( x );

    printf( "Binary number: " );
    printf( "%d", i );
    return 0;
}
