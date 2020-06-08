#include<stdio.h>
#include<math.h>

int main()
{
   long octal ,temp;
   int n=0,decimal=0;
   printf("Enter the octal input\n");
   scanf("%d",&octal);
   temp = octal;
   while(temp!=0)
   {        
        decimal+=(temp%10)*pow(8,n);
        n++;
        temp/=10;       
   }
    printf("octal no is %d\n",octal);
    printf("decimal no is %d\n",decimal);
    return 0;
}