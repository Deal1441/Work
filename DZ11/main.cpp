// Дана матрица размером 7х7. Поменять местами k-й столбец с k-ой строкой.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    constexpr int M = 7;
    constexpr int N = 7;
    int A[M][N];

    int i;
    int j;
    int n1;
    int n2;
    int ch;

    srand(time(NULL));
    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            A[i][j] = rand() % 10;
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }
    printf( "Change posts: " ); //поменять столбцы
    scanf( "%d", &n1 );
    scanf( "%d",&n2 );
    for ( i = 0; i < M; ++i)
    {
        ch = A[i][n1-1];
        A[i][n1-1] = A[i][n2-1];
        A[i][n2-1] = ch;
    }
    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            printf( "%5d", A[i][j]);
        }
        printf( "\n" );
    }
}
