#include<stdio.h>
#include<math.h>
void main()
{
   int n,count=0,temp,rem,k;
   printf("Enter the no  : ");
   scanf("%d",&n);
   rem = n;
   temp = n;
   while(temp>0)
  {
    temp/=10;
    count++;
  }
  int C = count;
   for(int i=1;i<=count;i++)
   {     
       printf("%d\n",rem);
       k = pow(10,C-1);
       rem = n%k;
       C--;
   } 
} 