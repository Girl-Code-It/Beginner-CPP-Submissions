#include<stdio.h>
#include<math.h>

int main()
{
   long binary,temp;
   int n=0,decimal=0;
   printf("Enter the binary input\n");
   scanf("%d",&binary);
   temp = binary;
   while(temp!=0)
   {
        if(temp%10==1)
       { decimal+=pow(2,n);}
        n++;
        temp/=10;
   }
    printf("binary no is %d\n",binary);
    printf("decimal no is %d\n",decimal);
    return 0;
}