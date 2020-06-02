#include<stdio.h>
void main()
{
   int n,Q,count=0,temp;
   printf("Enter the no  : ");
   scanf("%d",&n);
   Q = n;
   temp = n;
   while(temp>0)
  {
    temp/=10;
    count++;
  }
   for(int i=1;i<=count;i++)
   {     
       printf("%d \n",Q);
       Q = n/10;
       n = n/10;   
   } 
} 