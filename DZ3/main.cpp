#include <stdio.h>
#include <math.h>

int main()
{
    double r;
    double a;
    double d;

    printf("Enter r = ");
    scanf( "%if", &r );
    printf( "Enter a = " );
    scanf( "%if", &a );
    printf( "Enter d = " );
    scanf( "%if", &d );

    double aa = M_PI * r * r;
    double bb= sqrt (3) / 4 * a * a;
    double ss = d * d;

 ( aa > bb ) ? ( ( aa > ss )
    ? printf( " Square circle more \n" ) // Площадь круга больше
    :printf( " Square box more \n" ) )// Площадь квадрата больше
    :( ( bb > ss ) ? printf ( "Square triangle more \n" ) // Площадь треугольника больше
    : printf( "Square box more \n" ) );// Площадь квадрата больше
}
