#include<stdio.h>

int numberOfPath(int m,int n)
{
    if(m == 1 || n == 1)
     return 1;
    
    return numberOfPath(m,n-1) + numberOfPath(m-1,n);
}
int main()
{
   int t,m,n;
   scanf("%d",&t);

   while(t--)
   {
     scanf("%d %d",&m,&n);
     printf("%d\n",numberOfPath(m,n));
   }
  return 0;
}