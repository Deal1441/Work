#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand ( time(0) );
   int sizeA = 30, sizeB = 15;
   int masA [sizeA], masB [sizeB];
   bool a;
   for( int i = 0; i < sizeA; ++i )
   {
    masA[i] = rand () % ( 210-100 );
    printf( "%d ", masB[i] );
   }
    printf("\n");
    for( int i = 0; i < sizeB; ++i )
   {
     masB[i] = rand() % ( 2100-1000 );
     printf("%d ", masB[i]);
   }
    printf( "\n" );
    for(int i=0; i < sizeA; ++i )
   {
     for( int j=0; j < sizeB; ++j )
   {
     if( masA[i] != masB[j] )
     a = 1;
     else
     printf( "\n" );
   {
       a = 0;
       break;
   }
   }
     if( a == 1 )
     printf( "%d ", i );
    }
    return 0;
}
