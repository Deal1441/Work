#include<stdio.h>

int main ()
{
    long int i;
    long int a1;
    long int a2;
    long int a3;
    long int a4;
    printf ("Please enter number: ");
    scanf("%li", &i);
     a1 = i / 1000;
     a2 = i % 1000 / 100;
     a3 = i / 10 % 10;
     a4 = i % 10;
     printf ("Your number: ");
     printf ("%li%li%li%li", a4, a2, a3, a1);
}
