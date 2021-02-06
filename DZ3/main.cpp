#include <stdio.h>
#include <math.h>

int main(){
    double r;
    double a;
    double d;
    double aa;
    double bb;
    double ss;

    printf("Enter r = ");
    scanf( "%if", &r );
    printf( "Enter a = " );
    scanf( "%if", &a );
    printf( "Enter d = " );
    scanf( "%if", &d );

    aa=3.1416*r*r;
    bb=sqrt(3)/4*a*a;
    ss=d*d;

    (aa>bb)?((aa>ss)?printf( " Square circle more \n" ) // Площадь круга больше
                   :printf( " Square box more \n" ) )// Площадь квадрата больше
                   :( ( bb>ss ) ? printf ( "Square triangle more \n" )
                                  // Площадь треугольника больше
                   : printf( "Square box more \n" ) );// Площадь квадрата больше
    }
