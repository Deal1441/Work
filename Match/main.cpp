#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double r,a,d,sc,st,ss;
    printf("r=","a=","d=");
    cin>>r>>a>>d;
    sc=3.1416*r*r;
    st=sqrt(3)/4*a*a;
    ss=d*d;

    (sc>st)?((sc>ss)?printf("Площадь круга больше\n")
                   :printf("Площадь квадрата больше\n"))
                   :((st>ss)?printf("Площадь треугольника больше\n")
                   :printf("Площадь квадрата больше\n"));
    }
