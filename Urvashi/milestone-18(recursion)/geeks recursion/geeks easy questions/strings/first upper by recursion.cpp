#include <iostream>
#include <ctype.h>
using namespace std;
char first_upper(char *a, int i)
{
   if (a[i] == '\0')
      return 0;
   if (isupper(a[i]))
      return a[i];
   else
   {
      return first_upper(a, i + 1);
   }
}
int main()
{
   char a[100];
   cin >> a;
   char c = first_upper(a, 0);
   if (c == 0)
      cout << "not found\n";
   else
      cout << c << endl;
}
