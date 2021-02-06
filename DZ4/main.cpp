#include <stdio.h>
#include <math.h>

int main()
{
    long long int n = 0;
    long long int i = 0;
    printf ( "Please enter a number: " );
    scanf ( "%lli", &n );
    while( n != 0 )
    {
       n /= 10;
       ++i;
    }
    printf ( "Number of digits " );
    printf ( "%lli\n", i );
    return 0;
}
