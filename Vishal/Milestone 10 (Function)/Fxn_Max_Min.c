#include<stdio.h>

int Maximum(x,y)
{
   if(x>y)
   return x;
   else
   return y;
}

int Minimum(x,y)
{
   if(x<y)
   return x;
   else
   return y;
}

int main()
{
    int a,b;
    printf("Enter any two integers : ");
    scanf("%d %d",&a,&b);
    printf("Maximum no. is %d\n",Maximum(a,b));
    printf("Minimum no. is %d\n",Minimum(a,b));
}