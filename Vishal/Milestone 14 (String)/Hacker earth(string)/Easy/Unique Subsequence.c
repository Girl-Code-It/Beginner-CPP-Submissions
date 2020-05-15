#include<stdio.h>

int main()
{
    int t,n,count,l;
    scanf("%d",&t);
    while(t--)
      {
        scanf("%d",&n);
        char a[n+2];
        scanf("%s",a);
        l = strlen(a);
        count = 0;
        
        for(int i=0;i<l;i++)
         {
            if(a[i] == a[i+1])
            count++;  
         }
        printf("%d\n",l - count);
        
      }
  return 0;
}