#include <stdio.h>
#include <string.h>

int main()
{
  int a = 0;
  int s = 0;
  int d = 0;
  constexpr int SIZE = 1024;
  char str[SIZE];
  char str_result[SIZE];
  printf("Enter a line:");
  scanf( "%s", str );

  for (int i = 0; i < SIZE; ++i)
  {
    if (str[i] == '(')
  {
     ++a;
  }
    if (str[i] == ')')
  {
     --a;
  }
    if (str[i] == '{')
  {
     ++s;
  }
    if (str[i] == '}')
  {
     --s;
  }
    if (str[i] == '[')
  {
     ++d;
  }
    if (str[i] == ']')
  {
     --d;
  }
    }
     if (a == 0 && s == 0 && d == 0)
  { printf("Yes");
  }
   else {
   printf("No");
   }
  }
