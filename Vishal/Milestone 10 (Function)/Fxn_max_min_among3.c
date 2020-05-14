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
    int a,c,b;
    printf("Enter any three integers : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Maximum no. is %d\n",Maximum(c,Maximum(a,b)));
    printf("Minimum no. is %d\n",Minimum(c,Minimum(a,b)));
}