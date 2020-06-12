#include<stdio.h>

int stairCount(int n)
{
    if(n == 1 || n == 0)
    return 1;
    else if(n == 2)
    return 2;
    
    return stairCount(n-1) + stairCount(n-2) + stairCount(n-3);
}
int main()
{
   int n;
   scanf("%d",&n);

   printf("%d",stairCount(n));
   return 0;
}