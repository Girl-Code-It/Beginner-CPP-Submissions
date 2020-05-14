#include<stdio.h>

int Sort(void const*a,void const*b)
{
  return (*(int*)a - *(int*)b);
}
int main()
{
    int n,m,max = 0;
    scanf("%d",&n);
    
    int first[n],second;
    for(int i=0;i<n;i++)
      scanf("%d",&first[i]);
    
    scanf("%d",&m);
    for(int i=0;i<m;i++)
      {
        scanf("%d",&second);
        if(second > max)
        max = second;
       }
    
    
    qsort(first,n,sizeof(int),Sort);
    
    
    unsigned long long dollar = 0;
    
    for(int i=0;i<n;i++)
    {
      if(first[i] <= max)
       dollar += max - first[i] + 1;
    }
    
    printf("%llu\n",dollar);
    return 0;
}