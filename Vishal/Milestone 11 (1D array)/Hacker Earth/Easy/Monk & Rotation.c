#include<stdio.h>

int main()
{
   int n,k,t;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d %d",&n,&k);
      int a[n];
      for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
       
     k = (k > n) ? k%n : k;
     for(int i=0;i<n;i++)
     printf("%d ",a[(i+n-k)%n]);
    
     printf("\n");
   }
}