#include <stdio.h>

int main()
{
   char a[20], b[20], c[30];
   printf("Enter first string : ");
   gets(a);
   printf("Enter second string : ");
   gets(b);

   for (int i = 0; a[i] != '\0'; i++)
   {
      if (a[i] != b[i])
      {
         printf("\nStrings are not equal.\n");
         return 0;
      }
   }

   printf("\nStrings are equal.\n");
   return 0;
}