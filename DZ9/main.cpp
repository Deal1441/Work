#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    constexpr int SIZE = 40;
    int M[SIZE];
    int M_arr[SIZE] = {};
    int i = 0;
    int min = 0;
    int max = 0;
    int b = 0;

    srand( time (NULL) );
    min = 0;
    max = 0;
    for ( i = 0; i < SIZE; ++i )
    {
        M_arr[i] = rand() % 201 - 100 ;
        printf("%d ", M_arr[i]);
        if (M_arr[i] < M_arr[min]) min = i;
        if (M_arr[i] > M_arr[max]) max = i;
    }

    printf( "\n" );
    printf( "arr[%d]=%d arr[%d]=%d\n", min+1, M_arr[min], max+1, M_arr[max] );
    b = M_arr[min];
    M_arr[min] = M_arr[max];
    M_arr[max] = b;
    for ( i=0; i < SIZE; ++i )
    printf("%d ", M_arr[i]);
    printf("\n");
}
