#include<stdio.h>
#include<math.h>

int main()
{
   long binary,temp;
   int octal=0,r,n=0,reverse;

   printf("Enter the binary input\n");
   scanf("%d",&binary);
   temp = binary;
   while(temp!=0)
   {    r=temp%1000;
      while(r!=0)
    {
       if(r%10==1)
       octal+=pow(2,n);
       n++;
       r/=10;
    }
        n=0;
        temp/=1000; 
        octal*=10;    
   }
    octal/=10;
    while(octal!=0)
    { 
       reverse*= 10;
       reverse+= octal%10;
       octal/=10;
    }
    printf("binary no is %d\n",binary);
    printf("octal no is %d\n",reverse);
    return 0;
}