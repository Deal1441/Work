#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    int i = 0;
    int j;
    int k = 0;
    int l;

    gets (s);
    while(s[i]!=0)
    {
        j = i;
        for( ; s[i] == ' ' && s [i] != 0; ++i);
        l=i;
        for( ; s[i] != ' ' && s [i] != 0; ++i);
        if( ( ( i-l ) & 1 ) == 0 )
    {
    for( ; j < i; ++j , ++k)
    {
        s[k] = s[j];
    printf( "%c", s[k] );
    }
    }
    }
    s[k] = 0;
    return 0;
}
