#include <stdio.h>>
int main()
{
   int a, b, c;
   a= 5 % 3;
   a--;
   b = (a++) + 3;
   prinft("%d,%d\n", a, b);
   c = (++a) + 3;
   prinft("%d, %d, %d\n", a, b, c);
   return 0;
}