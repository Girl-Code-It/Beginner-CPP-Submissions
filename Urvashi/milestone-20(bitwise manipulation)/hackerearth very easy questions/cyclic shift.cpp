#include <iostream>
using namespace std;

int main()
{
   unsigned short n, m, t;
   char c;
   scanf("%hu", &t);

   while (t--)
   {
      scanf("%hu %hu %c", &n, &m, &c);

      if (c == 'L')
         printf("%hu\n", (n << m | (n >> (16 - m))));
      else
         printf("%hu\n", (n >> m | (n << (16 - m))));
   }
   return 0;
}
