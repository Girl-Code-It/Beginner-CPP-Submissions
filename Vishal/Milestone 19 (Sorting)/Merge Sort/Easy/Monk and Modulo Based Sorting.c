#include<stdio.h>

int main()
{
  int n,k;
  scanf("%d %d",&n,&k);

  int a[n];
  for(int i=0;i<n;i++)
   scanf("%d",&a[i]);

  for(int i=1;i<n;i++)
   {
     int flag = 0;
     for(int j=0;j<n-i;j++)
       {
         if(a[j+1]%k < a[j]%k)
          {
            int temp = a[j+1];
              a[j+1] = a[j];
                a[j] = temp;
             
              flag = 1;
          }
       }
      if(flag == 0)
      break;
   }

  for(int i=0;i<n;i++)
   printf("%d ",a[i]);
}