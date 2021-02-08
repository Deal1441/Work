#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int N = 0;
    printf( "Enter size Matrix: " );
    scanf("%d", &N);
    bool check_symmetry = true;
    int Matrix[N][N];

        for(int i = 0; i < N; ++i)
        {
          for (int j = 0; j < N; ++j)
        {
          Matrix[i][j]=rand() % 10;
        }
        }

       for(int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
            {
                if( Matrix[i][j] != Matrix[j][i] )
                    check_symmetry = false;
            }

        if ( check_symmetry == true )
        {
            printf ( "The matrix is symmetric" );
            for(int i = 0; i < N; ++i)
                for (int j = 0; j < N; ++j)
                    if(i == j)
                        Matrix[i][j] = 0;
        }

        else
            printf( "The matrix is not symmetric" );

        return 0;
}
