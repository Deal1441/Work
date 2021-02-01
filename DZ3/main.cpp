#include <stdio.h>
#include <math.h>

int main(){
    double r,a,d,aa,bb,ss;
    printf("r=","a=","d=");
    scanf( "%d%d", &r, &a, &d );
    aa=3.1416*r*r;
    bb=sqrt(3)/4*a*a;
    ss=d*d;


    (aa>bb)?((aa>ss)?printf("Площадь круга больше\n")
                   :printf("Площадь квадрата больше\n"))
                   :((bb>ss)?printf("Площадь треугольника больше\n")
                   :printf("Площадь квадрата больше\n"));
    }
