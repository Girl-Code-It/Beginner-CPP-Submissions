#include<stdio.h>
#include<math.h>

int main()
{
   long octal=0,temp;
   int n=1,decimal;
   printf("Enter any decimal no : ");
   scanf("%d",&decimal);
   temp = decimal;
   while(temp!=0)
   {
        octal+=(temp%8)*n;
        n*=10;
        temp/=8;
   }
    printf("decimal no = %d\n",decimal);
    printf("octal no = %d\n",octal);
    return 0;
}