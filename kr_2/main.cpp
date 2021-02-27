//Задача 2.
//Есть несколько детей, у каждого ребенка есть некоторое число конфет.
//Число конфет у детей задается массивом. Так же есть некоторое число дополнительных конфет.
//Требуется определить, если указанному ребенку отдать все дополнительные конфеты,
//то будет ли у него их максимальное количество.
//bool find( int* mass, int size, int child, int count );
//Примеры:
//[ 1, 2, 5, 2, 1], дополнительные конфеты 3.
//Результаты по детям: false, true, true, true, false

#include <stdio.h>

int main()
{
    constexpr int SIZE = 5;
    int mass [] = {1, 2, 5, 2, 1};
    int conf = 3;
    int dop = 0;
    bool answer;

    for ( int i = 0; i < SIZE; ++i )
    {
        dop = mass [i] + conf;
        for ( int j = 0; j < SIZE; ++j )
        {
           if ( dop > mass [j] )
                answer = true;
            else {
                 answer = false;
            }
    }
    if (answer == true)
        printf( "True " );
    else
        printf( "False " );

    return 0;
    }
}
