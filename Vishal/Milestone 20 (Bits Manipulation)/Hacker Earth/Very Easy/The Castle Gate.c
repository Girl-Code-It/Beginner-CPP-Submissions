#include<stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    
    while(t--)
    {
       scanf("%d",&n);
       int count = 0;
      for(int i = 1;i < n;i++)
       {
           for(int j = i+1;j <= n;j++)
            {
               if((i ^ j) <= n)
               count++;
            }
       }
    
       printf("%d\n",count);
    }
    return 0;
}