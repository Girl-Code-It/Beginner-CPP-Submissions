#include<stdio.h>
#include<math.h>

int main()
{
   long binary=0,temp;
   int n=1,decimal;
   printf("Enter any decimal no : ");
   scanf("%d",&decimal);
   temp = decimal;
   while(temp!=0)
   {
        binary+=(temp%2)*n;
        n*=10;
        temp/=2;
   }
    printf("binary no is %d\n",binary);
    printf("decimal no is %d\n",decimal);
    return 0;
}