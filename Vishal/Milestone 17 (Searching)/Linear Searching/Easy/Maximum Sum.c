#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n+1],count = 0;
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    long long int maxSum = 0,negMax = a[0];
  
    for(int i=0;i<n;i++)
    {
      if(a[i] >= 0) 
      {
      count++;
      maxSum += a[i];
      }
    }
    if(maxSum != 0)
    printf("%lld %d",maxSum,count);
    else
    {
       for(int i=0;i<n;i++) 
       {
         if(a[i] > negMax)
         negMax = a[i];
       }
     printf("%lld 1",negMax);
    
    }
    return 0;
}