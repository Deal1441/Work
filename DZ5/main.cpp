#include <stdio.h>

int main()
{
    int one;
    int two;
    int three;

   printf( "Enter one number: ");
   scanf( "%d", &one);
   printf( "Enter two number: ");
   scanf( "%d", &two);
   printf( "Enter three number: ");
   scanf( "%d", &three);

   int pereb = 0;
     if (one>two)
     pereb = one;
     else
     pereb = two;
     if (three>pereb)
     pereb = three;
     int del = pereb;

    for (int i = pereb; i >= 2; i--)
     {
       if(one % i == 0 && two % i == 0 && three % i == 0)
       {
         if (del > 1)
         del = i;
       }
     }

     printf( "NOD: ");
     printf( "%d", del);
     return 0;
  }



