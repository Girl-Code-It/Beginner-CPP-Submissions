#include<stdio.h>

int main()
{ 
   unsigned int n,d;
   printf("Program To Find N%%d,d=pow(2,x)\n\n");
   printf("Enter the Value of n & d : ");
   scanf("%u %u",&n,&d);

   printf("\n%d%%%d = %d\n",n,d,(n & (d-1)));
   
   return 0;
}