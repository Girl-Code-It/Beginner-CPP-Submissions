#include<stdio.h>
#include<limits.h>
int main()
{
   int n,m,g,t[10000],a[10000],time,count = 0;
   scanf("%d %d %d",&n,&m,&g);

   for(int i=0;i<n;i++)
      scanf("%d",&t[i]);
    
   for(int i=0;i<m;i++)
     scanf("%d",&a[i]);
    
  for(int i=1;i<n;i++)
    {
      time = t[i] - t[i-1];
      for(int j=0;j<m;j++)
         {
            if(time >= a[j])
            {
             count++;
             a[j] = INT_MAX;
            }
        }
    }
    printf("%d",count);
}
