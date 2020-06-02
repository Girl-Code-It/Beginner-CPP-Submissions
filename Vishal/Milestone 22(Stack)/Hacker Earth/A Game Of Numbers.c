#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
  
   long long a[n];
   for(int i=0;i<n;i++)
   scanf("%lld",&a[i]);

   for(int i=0;i<n;i++)
    {
       int k,flag = 0;
       for(int j=i+1;j<n;j++)
        {
           if(a[i] < a[j])
           {
              flag = 1;
              k = j;
              break;
           }
        }
        if(flag == 1)
        {
          flag = 0;
          for(int l=k+1;l<n;l++)
           {
            if(a[k] > a[l])
              {
                flag = 1;
                printf("%lld ",a[l]);
                break;
              }
           }
        }
        if(flag == 0)
        printf("-1 ");
    }
    return 0;
}