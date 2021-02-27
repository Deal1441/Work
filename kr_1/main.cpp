//Задача 1.
//Данн массив чисел. Каждое число в массиве встречается по 2 раза, кроме одного.
//Найти это одинокое число.

#include <stdio.h>

int main ()
{
    constexpr int SIZE = 5;
    int mass [] = {2, 1, 1, 2, 3};


    for ( int i = 0; i < SIZE; ++i )
    {
        int n = 0;
        for ( int j = 0; j < SIZE; ++j )
            if ( i != j && mass [i] == mass [j])
                ++n;
        if ( !n )
            printf( "%d", mass [i]);
    }

    return 0;
}
