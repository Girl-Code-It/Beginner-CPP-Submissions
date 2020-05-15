#include<stdio.h>

int main()
{
   char a[20];
   printf("Enter string : ");
   gets(a);
   int count = 0;
   while(a[count]!='\0')
   {
    count++;
   }
    printf("Length of string : %d",count);

}